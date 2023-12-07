#!/usr/bin/python3
""" New storage File """
import os
from models.user import User
from models.place import Place
from models.state import State
from models.city import City
from models.amenity import Amenity
from models.review import Review
from sqlalchemy import create_engine, MetaData
from sqlalchemy.orm import sessionmaker, scoped_session


class DBStorage:
    """ class for the second database """

    classtype = {'User': User, 'Place': Place, 'State': State,
                 'City': City, 'Amenity': Amenity, 'Review': Review}

    __engine = None
    __session = None

    def __init__(self):
        """ init func"""
        user = os.environ.get('HBNB_MYSQL_USER')
        password = os.environ.get('HBNB_MYSQL_PWD')
        host = os.environ.get('HBNB_MYSQL_HOST')
        database = os.environ.get('HBNB_MYSQL_DB')
        url = f'mysql+mysqldb://{user}:{password}@{host}/{database}'
        self.__engine = create_engine(f'{url}', pool_pre_ping=True)
        if os.environ.get('HBNB_ENV') == 'test':
            metadata = MetaData(bind=self.__engine)
            metadata.drop_all()

    def all(self, cls=None):
        """ all func """
        from models import classtype
        retdic = {}
        if cls is None:
            for clv in classtype.values():
                result = self.__session.query(clv).all()
                for each in result:
                    retdic[f'{each.__class__.__name__}.{each.id}'] = each
        else:
            result = self.__session.query(cls).all()
            for each in result:
                retdic[f'{each.__class__.__name__}.{each.id}'] = each
        return retdic

    def new(self, obj):
        """ new func """
        self.__session.add(obj)
        self.save()

    def save(self):
        """ save func """
        self.__session.commit()

    def delete(self, obj=None):
        """ delete func """
        if obj is not None:
            self.__session.delete(obj)
            self.save()

    def reload(self):
        """ reload func """
        from models.base_model import Base
        Base.metadata.create_all(self.__engine)
        session1 = sessionmaker(bind=self.__engine,
                                expire_on_commit=False)
        self.__session = scoped_session(session1)

    def close(self):
        """close func"""
        self.__session.remove()

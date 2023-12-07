#!/usr/bin/python3
""" State Module for HBNB project """
import os
from models.base_model import BaseModel, Base
from sqlalchemy import Column, String, ForeignKey
from sqlalchemy.orm import relationship


class State(BaseModel, Base):
    """ State class """
    var = os.environ.get('HBNB_TYPE_STORAGE')
    if var == 'db':
        __tablename__ = 'states'
        name = Column(String(128), nullable=False)
        cities = relationship("City", backref="state",
                              cascade="all, delete, delete-orphan")
    else:
        name = ""

        @property
        def cities(self):
            """geter func"""
            from models import storage, classtype
            temp = storage.all(classtype['City'])
            temp2 = {}
            for key, value in temp.items():
                if value['state_id'] == self.id:
                    temp2[key] = value
            return temp2

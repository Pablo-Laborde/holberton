#!/usr/bin/python3
""" Place Module for HBNB project """
import os
from models.base_model import BaseModel, Base
from sqlalchemy import Column, String, Integer, Float, ForeignKey, Table
from sqlalchemy.orm import relationship


class Place(BaseModel, Base):
    """ A place to stay """
    var = os.environ.get('HBNB_TYPE_STORAGE')
    if var == 'db':
        """place_amenity = Table('association', Base.metadata,
                                  Column(String(60), ForeignKey('places.id'),
                                         primary_key=True, nullable=False),
                                  Column(String(60), ForeignKey('amenity_id'),
                                         primary_key=True, nullable=False))"""
        __tablename__ = 'places'
        city_id = Column(String(60), ForeignKey('cities.id'), nullable=False)
        user_id = Column(String(60), ForeignKey('users.id'), nullable=False)
        name = Column(String(128), nullable=False)
        description = Column(String(1024), nullable=False)
        number_rooms = Column(Integer, default=0, nullable=False)
        number_bathrooms = Column(Integer, default=0, nullable=False)
        max_guest = Column(Integer, default=0, nullable=False)
        price_by_night = Column(Integer, default=0, nullable=False)
        latitude = Column(Float, nullable=True)
        longitude = Column(Float, nullable=True)
        amenity_ids = []
        reviews = relationship("Review", backref="place",
                              cascade="all, delete, delete-orphan")
        """amenities = relationship("Amenity", secondary=place_amenity,
                                 backref='places', viewonly=False)"""
    else:
        city_id = ""
        user_id = ""
        name = ""
        description = ""
        number_rooms = 0
        number_bathrooms = 0
        max_guest = 0
        price_by_night = 0
        latitude = 0.0
        longitude = 0.0
        amenity_ids = []

        @property
        def reviews(self):
            """getter func"""
            from models import storage, classtype
            temp = storage.all(classtype['Reviews'])
            temp2 = {}
            for key, value in temp.items():
                if value['place_id'] == self.id:
                    temp2[key] = value
            return temp2

        @property
        def amenities(self):
            """getter func"""
            from models import storage, classtype
            temp = storage.all(classtype['Amenity'])
            temp2 = {}
            for key, value in temp.items():
                if value['amenity_ids'] == self.id:
                    temp2[key] = value
            return temp2

        @amenities.setter
        def amenities(self, obj):
            """setter func"""
            from models import classtype
            if isinstance(obj, classtype['Amenity']):
                self.amenity_ids.append(obj)
            else:
                pass

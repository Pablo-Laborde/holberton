#!/usr/bin/python3
""" State Module for HBNB project """
import os
from models.base_model import BaseModel, Base
from sqlalchemy import Column, String, Table
from sqlalchemy.orm import relationship


class Amenity(BaseModel, Base):
    var = os.environ.get('HBNB_TYPE_STORAGE')
    if var == 'db':
        __tablename__ = 'amenities'
        name = Column(String(128), nullable=False)
        """place_amenities = relationship("Place", secondary="place_amenity")"""
    else:
        name = ""

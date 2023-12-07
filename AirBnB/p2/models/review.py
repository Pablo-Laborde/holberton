#!/usr/bin/python3
""" Review module for the HBNB project """
import os
from models.base_model import BaseModel, Base
from sqlalchemy import Column, Integer, String, DateTime, ForeignKey
from sqlalchemy.orm import relationship


class Review(BaseModel, Base):
    """ Review classto store review information """
    var = os.environ.get('HBNB_TYPE_STORAGE')
    if var == 'db':
        __tablename__ = 'reviews'
        place_id = Column(String(60), ForeignKey('users.id'), nullable=False)
        user_id = Column(String(60), ForeignKey('places.id'), nullable=False)
        text = Column(String(1024), nullable=False)
    else:
        place_id = ""
        user_id = ""
        text = ""

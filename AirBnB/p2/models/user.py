#!/usr/bin/python3
"""This module defines a class User"""
import os
from models.base_model import BaseModel, Base
from sqlalchemy import Column, Integer, String, DateTime
from sqlalchemy.orm import relationship


class User(BaseModel, Base):
    """This class defines a user by various attributes"""
    var = os.environ.get('HBNB_TYPE_STORAGE')
    if var == 'db':
        __tablename__ = 'users'
        email = Column(String(128), nullable=False)
        password = Column(String(128), nullable=False)
        first_name = Column(String(128), nullable=False)
        last_name = Column(String(128), nullable=False)
        places = relationship("Place", backref="user",
                              cascade="all, delete, delete-orphan")
        reviews = relationship("Review", backref="user",
                              cascade="all, delete, delete-orphan")
    else:
        email = ''
        password = ''
        first_name = ''
        last_name = ''

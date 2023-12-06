#!/usr/bin/python3
""" comment """

from sqlalchemy import Column, Integer, String, ForeignKey
from sqlalchemy.ext.declarative import declarative_base

Base = declarative_base()


class City(Base):
    """ class def """
    __tablename__ = 'cities'
    id = Column(Integer, nullable=False, autoincrement=True,
                primary_key=True)
    state_id = Column(Integer, ForeignKey('states.id'))
    name = Column(String(256), nullable=False)

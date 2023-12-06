#!/usr/bin/python3
""" comment """

from sqlalchemy import Column, Integer, String
from sqlalchemy.ext.declarative import declarative_base


Base = declarative_base()


class State(Base):
    """ class def """
    __tablename__ = 'states'
    id = Column(Integer, nullable=False, autoincrement=True,
                primary_key=True)
    name = Column(String(128), nullable=False)
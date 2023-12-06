#!/usr/bin/python3
""" main """

from models.base import Base
from models.rectangle import Rectangle
from models.square import Square
import json


r1 = Rectangle(3, 5, 1)
r2 = Rectangle(10, 7, 2, 8)

Rectangle.save_to_file([r1, r2])

print(Rectangle.load_from_file())

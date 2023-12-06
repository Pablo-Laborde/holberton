#!/usr/bin/python3
""" Ex 8 """

BG = __import__('7-base_geometry').BaseGeometry


class Rectangle(BG):
    """ Rectangle class """

    def __init__(self, width, height):
        """ init """
        self.integer_validator("width", width)
        self.integer_validator("height", height)
        self.__width = width
        self.__height = height

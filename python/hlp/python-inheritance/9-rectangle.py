#!/usr/bin/python3
""" Ex 9 """

BG = __import__('7-base_geometry').BaseGeometry


class Rectangle(BG):
    """ Rectangle class """

    def __init__(self, width, height):
        """ initialize the rectangle """
        self.integer_validator("width", width)
        self.integer_validator("height", height)
        self.__width = width
        self.__height = height

    def area(self):
        """ returns the area """
        return self.__height * self.__width

    def __str__(self):
        """ prints rectangle data """
        return f"[Rectangle] {self.__width}/{self.__height}"

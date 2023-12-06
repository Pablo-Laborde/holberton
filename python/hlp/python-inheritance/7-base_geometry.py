#!/usr/bin/python3
""" Ex 7 """


class BaseGeometry():
    """ Basegeometry class """
    def area(self):
        """ area function """
        raise Exception("area() is not implemented")

    def integer_validator(self, name, value):
        """ int val function """
        if type(value) != int:
            raise TypeError(f"{name} must be an integer")
        if value <= 0:
            raise ValueError(f"{name} must be greater than 0")

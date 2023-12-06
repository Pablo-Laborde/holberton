#!/usr/bin/python3
""" Ex 11 """

Rec = __import__('9-rectangle').Rectangle


class Square(Rec):
    """ square class """

    def __init__(self, size):
        """ initialize square """
        self.integer_validator("size", size)
        self.__size = size

    def area(self):
        """ returns the area """
        return self.__size ** 2

    def __str__(self):
        """ prints a square """
        return f"[Square] {self.__size}/{self.__size}"

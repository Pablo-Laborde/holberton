#!/usr/bin/python3
""" Ex 10 """

Rec = __import__('9-rectangle').Rectangle


class Square(Rec):
    """ square class """

    def __init__(self, size):
        """ initialize square """
        self.integer_validator("size", size)
        super().__init__(size, size)
        self.__size = size

    def area(self):
        """ returns the area """
        return self.__size ** 2

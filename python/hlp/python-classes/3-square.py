#!/usr/bin/python3
""" Ex 3 """


class Square:
    """ Square class """
    __size = 0

    def __init__(self, size=0):
        """ Instantiation square """
        if type(size) != int:
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")
        self.__size = size

    def area(self):
        """ Return area of square """
        return self.__size ** 2

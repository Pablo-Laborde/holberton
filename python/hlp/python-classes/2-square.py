#!/usr/bin/python3
""" Ex 2 """


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

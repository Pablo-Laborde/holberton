#!/usr/bin/python3
""" Ex 9 """


class Square:
    """ Square class """
    __size = 0

    def __init__(self, size=0):
        """ Instantiation square """
        if type(size) != int:
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = size

    def __eq__(self, other):
        """ equals """
        return self.size == other.size

    def __ne__(self, other):
        """ not equal """
        return self.size != other.size

    def __lt__(self, other):
        """ less than """
        return self.size < other.size

    def __gt__(self, other):
        """ greater than """
        return self.size > other.size

    def __le__(self, other):
        """ less or equal """
        return self.size <= other.size

    def __ge__(self, other):
        """ greater or equal """
        return self.size >= other.size

    @property
    def size(self):
        """ Retruns the size """
        return self.__size

    @size.setter
    def size(self, value):
        """ Sets the size to value """
        if type(value) != int:
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = value

    def area(self):
        """ Returns area of square """
        return self.__size ** 2

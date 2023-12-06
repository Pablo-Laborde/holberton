#!/usr/bin/python3
""" Ex 5 """


class Square:
    """ Square class """
    __size = 0

    def __init__(self, size=0):
        """ Instantiation square """
        self.size = size

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

    def my_print(self):
        """ Prints the square """
        if self.__size == 0:
            print()
        else:
            for i in range(self.__size):
                for j in range(self.__size):
                    print("#", end="")
                print()

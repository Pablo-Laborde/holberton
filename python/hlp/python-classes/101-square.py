#!/usr/bin/python3
""" Ex 8 """


class Square:
    """ Square class """
    __size = 0
    __position = tuple()

    def __init__(self, size=0, position=(0, 0)):
        """ Instantiation square """
        self.size = size
        self.position = position

    def __str__(self):
        """ Print """
        self.my_print()
        return ""

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

    @property
    def position(self):
        """ Returns the position """
        return self.__position

    @position.setter
    def position(self, value):
        """ Sets the position """
        if (len(value) != 2) or\
                (type(value[0]) != int) or (type(value[1]) != int) or\
                (value[0] < 0) or (value[1] < 0):
            raise TypeError("position must be a tuple of 2 positive integers")
        else:
            self.__position = value

    def area(self):
        """ Returns area of square """
        return self.__size ** 2

    def my_print(self):
        """ Prints the square """
        if self.__size > 0:
            for k in range(self.__position[1]):
                print()
            for i in range(self.__size):
                for h in range(self.__position[0]):
                    print(" ", end="")
                for j in range(self.__size):
                    print("#", end="")
                if i < self.__size - 1:
                    print()

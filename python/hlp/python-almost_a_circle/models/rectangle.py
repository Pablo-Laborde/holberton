#!/usr/bin/python3
""" Rectangle File """

from models.base import Base


class Rectangle(Base):
    """ Rectangle class """

    def __init__(self, width, height, x=0, y=0, id=None):
        """ initialization of rectangle

            variables:
                width / height / x / y
        """
        self.width = width
        self.height = height
        self.x = x
        self.y = y
        super().__init__(id)

    @property
    def width(self):
        """ rectangle's width """
        return self.__width

    @width.setter
    def width(self, width):
        if type(width) != int:
            raise TypeError("width must be an integer")
        if width <= 0:
            raise ValueError("width must be > 0")
        self.__width = width

    @property
    def height(self):
        """ rectangle's height"""
        return self.__height

    @height.setter
    def height(self, height):
        if type(height) != int:
            raise TypeError("height must be an integer")
        if height <= 0:
            raise ValueError("height must be > 0")
        self.__height = height

    @property
    def x(self):
        """ rectangle's x """
        return self.__x

    @x.setter
    def x(self, x):
        if type(x) != int:
            raise TypeError("x must be an integer")
        if x < 0:
            raise ValueError("x must be >= 0")
        self.__x = x

    @property
    def y(self):
        """ rectangle's y """
        return self.__y

    @y.setter
    def y(self, y):
        if type(y) != int:
            raise TypeError("y must be an integer")
        if y < 0:
            raise ValueError("y must be >= 0")
        self.__y = y

    def area(self):
        """ returns rectangle's area """
        return self.height * self.width

    def display(self):
        """ displays rectangle """
        for j in range(self.y):
            print()
        for h in range(self.height):
            for i in range(self.x):
                print(" ", end="")
            for w in range(self.width):
                print("#", end="")
            print()

    def __str__(self):
        """ str print """
        return f"[Rectangle] \
({self.id}) {self.x}/{self.y} - {self.width}/{self.height}"

    def update(self, *args, **kwargs):
        """ updates the rectangle """
        if len(args) == 0:
            for arg in kwargs:
                if arg == "id":
                    self.id = kwargs[arg]
                if arg == "width":
                    self.width = kwargs[arg]
                if arg == "height":
                    self.height = kwargs[arg]
                if arg == "x":
                    self.x = kwargs[arg]
                if arg == "y":
                    self.y = kwargs[arg]
        else:
            length = len(args)
            if length > 4:
                self.y = args[4]
            if length > 3:
                self.x = args[3]
            if length > 2:
                self.height = args[2]
            if length > 1:
                self.width = args[1]
            if length > 0:
                self.id = args[0]

    def to_dictionary(self):
        """ return dict """
        my_dic = {}
        my_dic['x'] = self.x
        my_dic['y'] = self.y
        my_dic['id'] = self.id
        my_dic['width'] = self.width
        my_dic['height'] = self.height
        return my_dic

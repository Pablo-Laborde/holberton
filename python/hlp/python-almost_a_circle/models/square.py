#!/usr/bin/python3
""" Rectangle File """

from models.rectangle import Rectangle


class Square(Rectangle):
    """ square class """

    def __init__(self, size, x=0, y=0, id=None):
        """ square initialization """
        super().__init__(size, size, x, y, id)

    def __str__(self):
        """ str print """
        return f"[Square] ({self.id}) {self.x}/{self.y} - {self.width}"

    @property
    def size(self):
        """ returns square size """
        return self.width

    @size.setter
    def size(self, size):
        self.width = size
        self.height = size

    def update(self, *args, **kwargs):
        """ updates the rectangle """
        if len(args) == 0:
            for arg in kwargs:
                if arg == "id":
                    self.id = kwargs[arg]
                if arg == "size":
                    self.width = kwargs[arg]
                    self.height = kwargs[arg]
                if arg == "x":
                    self.x = kwargs[arg]
                if arg == "y":
                    self.y = kwargs[arg]
        else:
            length = len(args)
            if length > 3:
                self.y = args[3]
            if length > 2:
                self.x = args[2]
            if length > 1:
                self.width = args[1]
                self.height = args[1]
            if length > 0:
                self.id = args[0]

    def to_dictionary(self):
        """ return dict """
        my_dic = {}
        my_dic['x'] = self.x
        my_dic['y'] = self.y
        my_dic['id'] = self.id
        my_dic['size'] = self.width
        return my_dic

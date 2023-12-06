#!/usr/bin/python3
""" Ex 11 """


class Student():
    """ student class """

    def __init__(self, first_name, last_name, age):
        """ initialization function"""
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        """ to json function """
        if type(attrs) == list:
            my_dic = {}
            for i in self.__dict__:
                if i in attrs:
                    my_dic[i] = self.__dict__.get(i)
            return my_dic
        return self.__dict__

    def reload_from_json(self, json):
        """ reload json function """
        self.__dict__.update(json)

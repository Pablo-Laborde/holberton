#!/usr/bin/python3
""" Ex 3 """


def is_kind_of_class(obj, a_class):
    """ Checks if obj's type is related to a_class """
    if issubclass(type(obj), a_class):
        return True
    return False

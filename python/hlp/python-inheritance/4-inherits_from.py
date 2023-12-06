#!/usr/bin/python3
""" Ex 4 """


def inherits_from(obj, a_class):
    """ func inherits """
    if type(obj) == a_class:
        return False
    if issubclass(type(obj), a_class):
        return True
    return False

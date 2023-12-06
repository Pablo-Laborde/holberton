#!/usr/bin/python3
""" Ex 13 """


def add_attribute(obj, attname, attvalue):
    """ function to add att """
    if (not hasattr(obj, '__dict__')):
        raise TypeError("can't add new attribute")
    setattr(obj, attname, attvalue)

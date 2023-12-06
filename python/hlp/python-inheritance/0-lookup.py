#!/usr/bin/python3
""" Ex 0"""


# Function that returns a list containing attributes and methods
def lookup(obj):
    """ test if works """
    # print(type(dir(obj)))
    nl = dir(obj)
    # print(isinstance(nl, list))
    return nl

print(lookup.__doc__)
#!/usr/bin/python3
""" Ex 2 """


def append_write(filename="", text=""):
    """ append write function """
    with open(filename, "a") as ofile:
        return ofile.write(text)

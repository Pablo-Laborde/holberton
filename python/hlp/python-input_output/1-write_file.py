#!/usr/bin/python3
""" Ex 1 """


def write_file(filename="", text=""):
    """ read file function """
    with open(filename, "w") as ofile:
        return ofile.write(text)

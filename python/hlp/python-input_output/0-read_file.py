#!/usr/bin/python3
""" Ex 0 """


def read_file(filename=""):
    """ read file function """
    with open(filename, "r", encoding="utf-8") as file:
        for line in file:
            print(line, end="")

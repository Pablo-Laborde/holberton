#!/usr/bin/python3
""" Ex 1 """


class MyList(list):
    """ MyList class """
    def print_sorted(self):
        print(sorted(self))

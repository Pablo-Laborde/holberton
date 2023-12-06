#!/usr/bin/python3
""" Ex 12 """


class MyInt(int):
    """ class myint """

    def __eq__(self, other):
        return not super().__eq__(other)

    def __ne__(self, other):
        return not super().__ne__(other)

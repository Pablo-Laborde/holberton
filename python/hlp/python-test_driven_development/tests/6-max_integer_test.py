#!/usr/bin/python3
""" unitest file """


import unittest
max_integer = __import__('6-max_integer').max_integer


class TestMaxInt(unittest.TestCase):
    """ class """
    def test_max_int(self):
        """ test fucntion """
        self.assertEqual(max_integer([1]), 1)
        self.assertEqual(max_integer([1, 2]), 2)
        self.assertEqual(max_integer([1, 3, 2]), 3)
        self.assertEqual(max_integer([0, 0]), 0)
        self.assertEqual(max_integer(), None)
        self.assertEqual(max_integer([-2, -3, -4, -8]), -2)
        self.assertEqual(max_integer([1.53, 6.33, -9.123, -1.54, 8.0]), 8.0)

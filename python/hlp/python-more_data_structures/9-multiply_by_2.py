#!/usr/bin/python3

def multiply_by_2(a_dictionary):
    nd = {}
    for i in a_dictionary:
        nd.update({i: 2 * a_dictionary[i]})
    return nd

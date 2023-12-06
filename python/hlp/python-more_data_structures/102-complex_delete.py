#!/usr/bin/python3

def complex_delete(a_dictionary, value):
    if a_dictionary:
        dellist = []
        for i in a_dictionary:
            if a_dictionary.get(i) == value:
                dellist.append(i)
        for j in dellist:
            a_dictionary.pop(j)
    return a_dictionary

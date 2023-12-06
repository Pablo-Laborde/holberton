#!/usr/bin/python3

def search_replace(my_list, search, replace):
    nl = []
    for i in range(len(my_list)):
        if my_list[i] == search:
            nl.append(replace)
        else:
            nl.append(my_list[i])
    return nl

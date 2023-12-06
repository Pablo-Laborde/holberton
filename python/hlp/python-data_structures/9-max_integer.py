#!/usr/bin/python3

def max_integer(my_list=[]):
    if any(my_list):
        a = 0
        for i in range(len(my_list)):
            if my_list[i] > my_list[a]:
                a = i
        return my_list[a]
    else:
        return None

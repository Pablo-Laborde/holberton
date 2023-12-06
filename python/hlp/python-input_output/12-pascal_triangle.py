#!/usr/bin/python3
""" Ex 11 """


def pascal_triangle(n):
    """ pascal triangle function """
    my_list = []
    if n > 0:
        for i in range(n):
            my_list.append([])
            for j in range(i + 1):
                if j == i or j == 0:
                    my_list[i].append(1)
                else:
                    a = my_list[i - 1][j - 1] + my_list[i - 1][j]
                    my_list[i].append(a)
    return my_list

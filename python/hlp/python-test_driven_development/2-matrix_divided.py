#!/usr/bin/python3
""" Module Ex 1 """


def matrix_divided(matrix, div):
    """ Function Comment"""
    for i in matrix:
        for j in i:
            if (type(j) != int) and (type(j) != float):
                raise TypeError("matrix must be a matrix (list of lists)\
 of integers/floats")
    for i in range(len(matrix)):
        if len(matrix[i]) != len(matrix[0]):
            raise TypeError("Each row of the matrix must have the same size")
    if (type(div) != int) and (type(div) != float):
        raise TypeError("div must be a number")
    if div == 0:
        raise ZeroDivisionError("division by zero")
    return list(map(lambda i:
                    list(map(lambda j: round(j / div, 2), i)), matrix))

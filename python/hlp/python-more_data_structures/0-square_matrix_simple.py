#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    lr = []
    for i in range(len(matrix)):
        lr.append([])
        for j in matrix[i]:
            lr[i].append(j ** 2)
    return lr

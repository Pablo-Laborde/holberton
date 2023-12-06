#!/usr/bin/python3

def divisible_by_2(my_list=[]):
    my_bool = []
    for i in range(len(my_list)):
        if my_list[i] % 2 == 0:
            my_bool.append(True)
        else:
            my_bool.append(False)
    return my_bool


my_list = [1, 2, 3]
print(my_list)
del my_list[1]
print(my_list)
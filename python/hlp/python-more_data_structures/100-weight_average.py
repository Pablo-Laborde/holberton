#!/usr/bin/python3

def weight_average(my_list=[]):
    ave = 0
    if len(my_list) > 0:
        sum = 0
        count = 0
        for i in my_list:
            sum += i[0] * i[1]
            count += i[1]
        ave = sum / count
    return ave

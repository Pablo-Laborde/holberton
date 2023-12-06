#!/usr/bin/python3

def print_last_digit(number):
    ret = ((-number % 10, number % 10)[number >= 0])
    print("{}".format(ret), end="")
    return (ret)

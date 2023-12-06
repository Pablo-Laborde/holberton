#!/usr/bin/python3

def roman_to_int(roman_string):
    sum = 0
    if isinstance(roman_string, str):
        length = len(roman_string)
        for i in range(length):
            if i < length - 1 and\
                    conv_let(roman_string[i]) < conv_let(roman_string[i + 1]):
                sum -= conv_let(roman_string[i])
            else:
                sum += conv_let(roman_string[i])
    return sum


def conv_let(letter):
    if letter == 'I':
        return 1
    if letter == 'V':
        return 5
    if letter == 'X':
        return 10
    if letter == 'L':
        return 50
    if letter == 'C':
        return 100
    if letter == 'D':
        return 500
    if letter == 'M':
        return 1000

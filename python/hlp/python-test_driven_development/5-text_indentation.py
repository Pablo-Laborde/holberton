#!/usr/bin/python3
""" Module Ex 5 """


def text_indentation(text):
    """ text identation """
    if type(text) != str:
        raise TypeError("text must be a string")
    x = ''
    flag = True
    pos = 0
    for char in text:
        if char in ['.', '?', ':']:
            x += char
            x += "\n\n"
            flag = True
        elif char == ' ' and flag:
            pass
        else:
            x += char
            flag = False
    print(x, end="")

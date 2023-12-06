#!/usr/bin/python3

def no_c(my_string):
    my_dic = {ord('c'): "", ord('C'): ""}
    ns = my_string.translate(my_dic)
    return ns

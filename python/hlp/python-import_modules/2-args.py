#!/usr/bin/python3

def print_argv(argv, length):
    for i in range(1, length):
        print("{}: {}".format(i, argv[i]))


if __name__ == "__main__":
    from sys import argv
    length = len(argv) - 1
    if length == 0:
        print("0 arguments.")
    elif length == 1:
        print("1 argument:")
        print_argv(argv, length + 1)
    else:
        print("{} arguments:".format(length))
        print_argv(argv, length + 1)

#!/usr/bin/python3

def func_op(a, b, op):
    if op == '+':
        return (add(a, b))
    elif op == '-':
        return (sub(a, b))
    elif op == '*':
        return (mul(a, b))
    elif op == '/':
        return (div(a, b))
    else:
        print("Unknown operator. Available operators: +, -, * and /")
        s_exit(1)


if __name__ == "__main__":
    from sys import argv as av, exit as s_exit
    from calculator_1 import add, sub, mul, div
    ac = len(av)
    if ac != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        s_exit(1)
    res = func_op(int(av[1]), int(av[3]), av[2])
    print("{} {} {} = {}".format(av[1], av[2], av[3], res))

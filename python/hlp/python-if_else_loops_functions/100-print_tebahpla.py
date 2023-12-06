#!/usr/bin/python3

for i in range(26):
    print("{}".format((chr(122 - i - 32), chr(122 - i))[i % 2 == 0]), end="")

#!/usr/bin/python3

if __name__ == "__main__":
    import hidden_4
    dic = dir(hidden_4)
    for i in dic:
        if i[0] != '_':
            print(i)

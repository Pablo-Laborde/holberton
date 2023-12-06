#!/usr/bin/python3

def best_score(a_dictionary):
    if a_dictionary:
        dl = list(a_dictionary)
        key = dl[0]
        for i in dl:
            if a_dictionary[i] > a_dictionary[key]:
                key = i
        return key
    else:
        return None

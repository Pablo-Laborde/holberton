#!/usr/bin/python3

def only_diff_elements(set_1, set_2):
    set_nr = set()
    set_r = set()
    for i in set_1:
        if i not in set_nr and i not in set_r:
            set_nr.add(i)
        elif i in set_nr:
            set_r.add(i)
            set_nr.remove(i)
    for i in set_2:
        if i not in set_nr and i not in set_r:
            set_nr.add(i)
        elif i in set_nr:
            set_r.add(i)
            set_nr.remove(i)
    return set_nr

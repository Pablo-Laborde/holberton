#!/usr/bin/python3
""" Ex 5 """

import json


def save_to_json_file(my_obj, filename):
    """ save to file json """
    with open(filename, "w") as o_file:
        o_file.write(json.dumps(my_obj))

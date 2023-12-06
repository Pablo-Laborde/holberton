#!/usr/bin/python3
""" Ex 6 """

import json


def load_from_json_file(filename):
    """" load from file json """
    with open(filename, "r", encoding="UTF8") as i_file:
        return json.loads(i_file.read())

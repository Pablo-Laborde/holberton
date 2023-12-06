#!/usr/bin/python3
""" Base File """

import json


class Base():
    """ Base class """

    __nb_objects = 0

    def __init__(self, id=None):
        """ initialization """
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = self.__nb_objects

    @staticmethod
    def to_json_string(list_dictionaries):
        """ json string """
        if list_dictionaries is None:
            return "[]"
        return json.dumps(list_dictionaries)

    @classmethod
    def save_to_file(cls, list_objs):
        """ to json file """
        filename = f"{cls.__name__}.json"
        with open(filename, "w") as o_file:
            if list_objs is None:
                o_file.write(cls.to_json_string(None))
            else:
                myl = []
                for elm in list_objs:
                    myl.append(elm.to_dictionary())
                o_file.write(cls.to_json_string(myl))

    @staticmethod
    def from_json_string(json_string):
        """ from json file """
        if json_string is None:
            return []
        return json.loads(json_string)

    @classmethod
    def create(cls, **dictionary):
        """ creates an obj """
        if cls.__name__ == "Square":
            dummy = cls(1)
        elif cls.__name__ == "Rectangle":
            dummy = cls(1, 1)
        dummy.update(**dictionary)
        return dummy

    @classmethod
    def load_from_file(cls):
        """ load json """
        myl = []
        filename = f"{cls.__name__}.json"
        try:
            with open(filename, "r", encoding="UTF8") as i_file:
                myla = cls.from_json_string(i_file.read())
                for elm in myla:
                    myl.append(cls.create(**elm))
        except FileNotFoundError:
            pass
        return myl

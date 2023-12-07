#!/usr/bin/python3
"""This module defines a class to manage file storage for hbnb clone"""
import json
from models.base_model import BaseModel
from models.user import User
from models.place import Place
from models.state import State
from models.city import City
from models.amenity import Amenity
from models.review import Review


class FileStorage:
    """This class manages storage of hbnb models in JSON format"""

    classtype = {'BaseModel': BaseModel, 'User': User, 'Place': Place,
                 'State': State, 'City': City, 'Amenity': Amenity,
                 'Review': Review}

    __file_path = 'file.json'
    __objects = {}

    def all(self, cls=None):
        """Returns a dictionary of models currently in storage"""
        if cls is None:
            return FileStorage.__objects
        else:
            olist = {}
            for key, value in self.__objects.items():
                if value.__class__ == cls:
                    olist[key] = value
            return olist

    def new(self, obj):
        """Adds new object to storage dictionary"""
        self.all().update({obj.to_dict()['__class__'] + '.' + obj.id: obj})

    def save(self):
        """Saves storage dictionary to file"""
        with open(FileStorage.__file_path, 'w') as f:
            temp = {}
            temp.update(FileStorage.__objects)
            for key, val in temp.items():
                temp[key] = val.to_dict()
            json.dump(temp, f)

    def reload(self):
        """Loads storage dictionary from file"""
        try:
            temp = {}
            with open(FileStorage.__file_path, 'r') as f:
                temp = json.load(f)
                for key, val in temp.items():
                    self.all()[key] = self.classtype[val['__class__']](**val)
        except FileNotFoundError:
            pass

    def delete(self, obj=None):
        """Delete an onject if exists"""
        if obj is not None:
            key = obj.to_dict()['__class__'] + '.' + obj.id
            self.__objects.pop(key)
            """doesnt save changes, this was checked before sqlalchemy"""

    def close(self):
        """close func"""
        self.reload()

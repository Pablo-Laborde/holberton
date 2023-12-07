#!/usr/bin/python3
"""This module instantiates an object of class FileStorage"""
import os
from models import storage

print(storage.all().values())

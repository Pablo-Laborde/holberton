#!/usr/bin/env python3
"""ex hol"""


def insert_school(mongo_collection, **kwargs):
    """func insert"""
    return mongo_collection.insert_one(kwargs).inserted_id

#!/usr/bin/env python3
"""ex hol"""


def update_topics(mongo_collection, name, topics):
    """update func"""
    mongo_collection.update_many({"name": name}, {'$set': {"topics": topics}})
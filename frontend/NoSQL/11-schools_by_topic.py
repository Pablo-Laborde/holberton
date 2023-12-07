#!/usr/bin/env python3
"""ex hol"""


def schools_by_topic(mongo_collection, topic):
    """topics func"""
    myl = []
    col = mongo_collection.find()
    for each in col:
        if topic in each['topics']:
            myl.append(each)
    return myl

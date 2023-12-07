#!/usr/bin/env python3
"""ex hol"""


def list_all(mongo_collection):
    """list func"""
    myl = []
    col = mongo_collection.find()
    for each in col:
        myl.append(each)
    return myl

#!/usr/bin/env python3
"""ex hol"""
from pymongo import MongoClient


if __name__ == "__main__":
    with MongoClient() as client:
        db = client.logs
        col = db.nginx
        c_total = 0
        mydic = {
            "GET": 0,
            "POST": 0,
            "PUT": 0,
            "PATCH": 0,
            "DELETE": 0
        }
        c_get_path = 0
        for each in col.find():
            c_total += 1
            met = each['method']
            if met in mydic:
                mydic[met] += 1
                if met == "GET" and each['path'] == '/status':
                    c_get_path += 1
        print(f"{c_total} logs")
        print("Methods:")
        for each in mydic:
            if each != 'TOTAL':
                print(f"\tmethod {each}: {mydic[each]}")
        print(f"{c_get_path} status check")

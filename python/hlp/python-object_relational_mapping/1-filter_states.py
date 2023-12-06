#!/usr/bin/python3
""" comment """

import MySQLdb
from sys import argv


if __name__ == "__main__":
    db = MySQLdb.connect(host="localhost", port=3306, user=argv[1],
                         password=argv[2], database=argv[3])
    cur = db.cursor()
    cur.execute(
        "SELECT id, name FROM states WHERE name LIKE BINARY 'N%' ORDER BY id")
    table = cur.fetchall()
    for row in table:
        print(row)
    cur.close()
    db.close()

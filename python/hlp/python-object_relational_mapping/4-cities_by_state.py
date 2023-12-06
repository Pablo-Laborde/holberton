#!/usr/bin/python3
""" comment """


if __name__ == "__main__":
    import MySQLdb
    from sys import argv

    lh = "localhost"
    usr = argv[1]
    psw = argv[2]
    dtb = argv[3]

    db = MySQLdb.connect(host=lh, port=3306, user=usr,
                         password=psw, database=dtb)
    cur = db.cursor()
    cur.execute("SELECT cities.id, cities.name, states.name FROM cities\
                JOIN states ON cities.state_id = states.id\
                ORDER BY cities.id")
    table = cur.fetchall()
    for row in table:
        print(row)
    cur.close()
    db.close()

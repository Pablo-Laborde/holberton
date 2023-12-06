#!/usr/bin/python3
""" comment """


if __name__ == "__main__":
    import MySQLdb
    from sys import argv

    lh = "localhost"
    usr = argv[1]
    psw = argv[2]
    dtb = argv[3]
    sns = argv[4].split(';')[0]

    db = MySQLdb.connect(host=lh, port=3306, user=usr,
                         password=psw, database=dtb)
    cur = db.cursor()
    cur.execute("SELECT id, name FROM states WHERE name=BINARY'{}' \
ORDER BY id".format(sns))
    table = cur.fetchall()
    for row in table:
        print(row)
    cur.close()
    db.close()

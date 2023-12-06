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
    cur.execute(f"SELECT cities.name FROM cities\
                JOIN states ON cities.state_id = states.id\
                WHERE states.name='{sns}'\
                ORDER BY cities.id")
    table = cur.fetchall()
    text = ""
    for row in table:
        if text == "":
            text += row[0]
        else:
            text += f", {row[0]}"
    print(text)
    cur.close()
    db.close()

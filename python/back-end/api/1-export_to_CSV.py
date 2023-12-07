#!/usr/bin/python3
""" ex 0 """

if __name__ == "__main__":
    """ main """
    import csv
    import requests
    import json
    from sys import argv as av

    id = int(av[1])
    r_users = requests.get('https://jsonplaceholder.typicode.com/users')
    r_tasks = requests.get('https://jsonplaceholder.typicode.com/todos')
    a_users = json.loads(r_users.text)
    a_tasks = json.loads(r_tasks.text)
    for each in a_users:
        if each['id'] == id:
            persona = each['username']
            break
    else:
        persona = None
    data = []
    for each in a_tasks:
        if each['userId'] == id:
            uid = str(each['userId'])
            sta = str(each['completed'])
            tit = each['title']
            task = [f'{uid}', f'{persona}', f'{sta}', f'{tit}']
            data.append(task)

    filename = f"{av[1]}.csv"
    with open(filename, 'w', encoding='utf-8', newline='') as ofile:
        csvwriter = csv.writer(ofile)
        csvwriter.writerows(data)

#!/usr/bin/python3
""" ex 2 """

if __name__ == "__main__":
    """ main """
    import json
    import requests
    from sys import argv

    id = int(argv[1])
    r_users = requests.get('https://jsonplaceholder.typicode.com/users')
    r_tasks = requests.get('https://jsonplaceholder.typicode.com/todos')
    a_users = json.loads(r_users.text)
    a_tasks = json.loads(r_tasks.text)
    for each in a_users:
        if each['id'] == id:
            persona = each
            break
    else:
        persona = None
    data = []
    for each in a_tasks:
        if each['userId'] == id:
            task = {}
            task['task'] = each['title']
            task['completed'] = str(each['completed'])
            task['username'] = persona['username']
            data.append(task)
    mydic = {}
    mydic[f'{id}'] = data
    filename = f'{id}.json'
    with open(filename, 'w') as ofile:
        ofile.write(json.dumps(mydic))

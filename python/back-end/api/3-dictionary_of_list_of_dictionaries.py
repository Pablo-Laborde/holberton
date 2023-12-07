#!/usr/bin/python3
""" ex 2 """

if __name__ == "__main__":
    """ main """
    import json
    import requests

    r_users = requests.get('https://jsonplaceholder.typicode.com/users')
    r_tasks = requests.get('https://jsonplaceholder.typicode.com/todos')
    a_users = json.loads(r_users.text)
    a_tasks = json.loads(r_tasks.text)
    mydic = {}
    for user in a_users:
        id = user['id']
        data = []
        for each in a_tasks:
            if each['userId'] == id:
                task = {}
                task['username'] = user['username']
                task['task'] = each['title']
                task['completed'] = str(each['completed'])
                data.append(task)
        mydic[f'{id}'] = data
    filename = 'todo_all_employees.json'
    with open(filename, 'w') as ofile:
        ofile.write(json.dumps(mydic))

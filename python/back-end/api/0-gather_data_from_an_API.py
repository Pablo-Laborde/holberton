#!/usr/bin/python3
""" ex 0 """

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
    tasks_done = []
    ntd = 0
    ntt = 0
    for each in a_tasks:
        if each['userId'] == id:
            ntt += 1
            if each['completed'] is True:
                tasks_done.append(each['title'])
                ntd += 1

    if persona is not None:
        print(f"Employee {persona['name']} is done with tasks({ntd}/{ntt}):")
        for each in tasks_done:
            print(f"\t {each}")

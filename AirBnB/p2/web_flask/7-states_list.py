#!/usr/bin/python3
""" flask file"""

from flask import Flask, render_template
from models import storage


app = Flask(__name__)
datalist = storage.all("State").values()


@app.teardown_appcontext
def close(exception):
    storage.close()

@app.route("/states_list", strict_slashes=False)
def make_req():
    return render_template('7-states_list.html', datalist=datalist)


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)

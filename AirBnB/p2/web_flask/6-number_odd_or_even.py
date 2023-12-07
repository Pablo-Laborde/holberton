#!/usr/bin/python3
""" flask file"""

from flask import Flask
from flask import render_template


app = Flask(__name__)


@app.route("/", strict_slashes=False)
def index_wel():
    return "Hello HBNB!"


@app.route("/hbnb", strict_slashes=False)
def hbnb_wel():
    return "HBNB"


@app.route("/c/<text>", strict_slashes=False)
def c_wel(text):
    return f"C {text.replace('_', ' ')}"


@app.route("/python", strict_slashes=False)
@app.route("/python/", strict_slashes=False)
@app.route("/python/<text>", strict_slashes=False)
def python_wel(text="is cool"):
    return f"Python {text.replace('_', ' ')}"


@app.route("/number/<int:n>", strict_slashes=False)
def number_wel(n):
    return f"{n} is a number"


@app.route("/number_template/<int:n>", strict_slashes=False)
def numtemp_wel(n):
    return render_template('5-number.html', n=n)


@app.route("/number_odd_or_even/<int:n>", strict_slashes=False)
def numtempoe_wel(n):
    if n % 2 == 0:
        typ = "even"
    else:
        typ = "odd"
    return render_template('6-number_odd_or_even.html', n=n, typ=typ)


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)

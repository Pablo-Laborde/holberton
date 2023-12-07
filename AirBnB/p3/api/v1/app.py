#!/usr/bin/python3
""" script """

from flask import Flask
from models import storage
from api.v1.views import app_views


app = Flask(__name__)

@app.teardown_appcontext
def close(exception):
    """close func"""
    storage.close()


if __name__ == "__main__":
    """main"""
    app.run(host='0.0.0.0', port=5000, threaded=True)

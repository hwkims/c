# 5_3_flask.py
from flask import Flask, render_template, request
import random

app = Flask(__name__)


@app.route('/')
def hello():
    return 'hello, flask!'


def make_randoms(size, limit):
    return [random.randrange(limit) for i in range(size)]


@app.route('/lotto')
def lotto645():
    lotto = make_randoms(6, 45)
    lotto = [i+1 for i in lotto]
    return render_template('lotto.html', lotto=lotto, imagePath='image2.jpg')


# http://127.0.0.1:5000/param?first=123&second=notebook
@app.route('/param')
def param():
    first = request.args.get('first')
    second = request.args.get('second')
    return [first, second]


if __name__ == '__main__':
    app.run(debug=True)




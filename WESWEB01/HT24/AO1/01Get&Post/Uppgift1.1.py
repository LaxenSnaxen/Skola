from flask import Flask, request, render_template
import random

app = Flask(__name__)


@app.route('/')
def index():
    return render_template("home.html")

@app.route('/add', methods=['GET', 'POST'])
def calculate():
    if request.method == 'POST':
        number = float(request.form['number'])
        number1 = float(request.form['number1'])
        result = number + number1
        return render_template('result.html', result=result)
    else:
        return render_template('calculator.html')

@app.route("/dice", methods=['GET', 'POST'])
def dice():
    if request.method == 'POST':
        number = int(request.form['number'])
        number1 = int(request.form['number1'])
        diceResult = random.randrange(number, number1+1)
        return render_template('diceResult.html', diceResult=diceResult)
    else:
        return render_template('dice.html')

@app.route("/passGenerator", methods=['GET', 'POST'])
def password():
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    password = ""
    if request.method == 'POST':
        numbers = int(request.form['numbers'])
        letters = int(request.form['letters'])
        for num in range(letters):
            password += random.choice(alphabet)
        for num in range(numbers):
            password += str(random.randint(0, 10))
        return render_template('passwordResult.html', password=password)
    else:
        return render_template('passwordGenerator.html')

if __name__ =='__main__':  
    app.run(debug = True, port=5555)
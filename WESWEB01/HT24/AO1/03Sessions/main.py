from flask import Flask, render_template, request, redirect, url_for, session
import csv
from pathlib import Path

app = Flask(__name__)
app.secret_key = 'MuBC1EstEby8rRH6Td2J'

@app.route('/', methods=['GET', 'POST'])
def login():
    counter = session.get("counter")
    username = session.get("username")
    if counter == None:
        counter = 0
    
    counter += 1

    session["counter"] = counter    

    print(f"Användaren har kollat {counter} gånger.")
    print(session)
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        session["username"] = username

        with open('users.csv', newline='') as csvfile:

            data = csv.reader(csvfile, delimiter=' ', quotechar='|')
            dataPoint = f"{username},{password}"
            print (dataPoint)
            for row in data:
                if dataPoint in row:
                    session['logged_in'] = True
                    return redirect(url_for('secret'))
                else:
                    return "Invalid credentials. Please try again.", 401
    else:
        if session.get('logged_in'):
            return "You are already logged in!", 200
        else:
            return render_template('login.html')

@app.route('/secret')
def secret():
    if session.get('logged_in'):
        return render_template('secret.html', username=session["username"])
    else:
        return redirect(url_for('login'))

@app.route('/logout')
def logout():
    if session.get('logged_in'):
        session['logged_in'] = False
        return redirect(url_for('login'))
    else:
        return redirect(url_for('login'))

@app.route('/superSecret')
def superSecret():
    if session.get('logged_in') and session["username"] == "admin":
        return render_template('superSecret.html')
    else:
        return redirect(url_for('login'))
    
@app.route('/register', methods=['GET', 'POST'])
def register():
        if request.method == "POST":
            username = request.form["username"]
            password = request.form["password"]
            
            with open('users.csv', 'w', newline='') as file:
                writer = csv.writer(file, delimiter=",")
                writer.writerow([username, password])

            return ("User registered!")
        else:
            return render_template('register.html')


if __name__ == '__main__':
    app.run(debug=True, port=9999)

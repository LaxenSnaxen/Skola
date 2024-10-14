from flask import Flask, render_template, request, redirect, url_for, session
import json

app = Flask(__name__)

@app.route('/')
def home():
    if session.get("loggedIn"):
        return render_template('home.html')
    else:
        return redirect(url_for('logIn'))

@app.route('/login', methods=["POST", "GET"])
def logIn():
    session.get("username")
    session.get("loggedIn")
    session["loggedIn"] = False
    if request.method == "POST":
        email = request.form['email']
        password = request.form['password']

        with open('WESWEB01\HT24\AO1\Projekt\static/test.json', 'r') as openFile:
            file = json.load(openFile)
            if email in file:
                if email["password"] == password:
                    print ('Credentials valid.')
                    session["username"] = email["username"]
                    session["loggedIn"] = True
            else:
                return "Invalid credentials."
    else:
        if session.get("loggedIn"):
            return "You are already logged in!", 200
        else:
            return render_template('login.html')
    
@app.route('/register', methods=["POST", "GET"])
def register():
    if request.method == "POST":
        email = request.form["email"]
        username = request.form["username"]
        password = request.form["password"]

        newDict = {
            'username': username,
            'password': password
        }
        with open('WESWEB01\HT24\AO1\Projekt\static/test.json', 'r') as openFile:
            file = json.load(openFile)
            file.update({email:newDict})

        with open('WESWEB01\HT24\AO1\Projekt\static/test.json', 'w') as outFile:
            outFile.write(json.dumps(file, indent=4))
        return ("User registered!")
    else:
        return render_template('register.html')
    
if __name__ == '__main__':
    app.run(debug=True, port=9999)

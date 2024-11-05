from flask import Flask, render_template, request, redirect, url_for, session
import json
import random

app = Flask(__name__)
app.secret_key = 'MuBC1EstEby8rRH6Td2J'

@app.route('/', methods=["POST", "GET"])
def home():
    session.get("username")
    session.get("password")
    session.get("loggedIn")
    session.get("email")
    session.get("todoLists")

    if request.method == "POST":
            session["todoLists"] = {}
            item = request.form["item"]
            desc = request.form["desc"]

            with open('data.json', 'r') as openFile:
                file = json.load(openFile)
                id = (random.randint(0,9999))
                while id in file:
                    id = (random.randint(0,9999))
                file[session["email"]]["list"].update({item: [desc, id]})

                print(session["todoLists"])
                print(session["username"])
                print(session["loggedIn"])

            with open('data.json', 'w') as outFile:
                outFile.write(json.dumps(file, indent=4))
            return redirect(url_for("home"))
    else:
        if session.get('loggedIn') != True:
            return redirect(url_for("logIn"))
        else:
            with open('data.json', 'r') as openFile:
                file = json.load(openFile)
                return render_template("home.html", username=session["username"], loggedIn=True, lists=file[session["email"]]["list"])



@app.route('/login', methods=["POST", "GET"])
def logIn():
    session.get("username")
    session.get("password")
    session.get("loggedIn")
    session.get("email")
    session.get("todoLists")
    session["loggedIn"] = False


    if request.method == "POST":
        email = request.form['email']
        password = request.form['password']

        with open('data.json', 'r') as openFile:
            file = json.load(openFile)
            if email in file:
                if file.get(email).get("password") == password:
                    print ('Credentials valid.')
                    session["username"] = file.get(email).get("username")
                    session["password"] = file.get(email).get("password")
                    session["email"] = email
                    session["loggedIn"] = True


                    return redirect(url_for("home"))
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

        id = (random.randint(0,9999))
        while id in file:
            id = (random.randint(0,9999))

        newDict = {
            'username': username,
            'password': password,
            'list': {"Item": ["Desc", id]}
        }   
        with open('data.json', 'r') as openFile:
            file = json.load(openFile)
            file.update({email:newDict})

        with open('data.json', 'w') as outFile:
            outFile.write(json.dumps(file, indent=4))
        return ("User registered!")
    else:
        return render_template('register.html')
    
@app.route('/logout')
def logout():
    session["username"] = None
    session["password"] = None
    session["email"] = None
    session["loggedIn"] = False

    return redirect(url_for('logIn'))

@app.route ('/delete/<item>')
def delete(item):
    print(item)
    print(type(item))
    with open('data.json', 'r') as openFile:
                file = json.load(openFile)
                diction = file[session["email"]]["list"]
                for title, list in diction:
                    print (f"Title: {title}, List: {list}")
                #file[session["email"]]["list"].pop(item)

    with open('data.json', 'w') as outFile:
        outFile.write(json.dumps(file, indent=4))
        return redirect(url_for("home"))

if __name__ == '__main__':
    app.run(debug=True, port=9999)

from flask import Flask, render_template, request
import random

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/about')
def about():
    team_members = [
        {'name': 'Alice Smith', 'title': 'CEO', 'bio': 'Alice leads the company with a vision for growth.'},
        {'name': 'Bob Johnson', 'title': 'Innovation Coordinator', 'bio': 'Bob drives innovation across all departments.'},
        {'name': 'Carol Williams', 'title': 'Sales Coordinator', 'bio': 'Carol connects our solutions with customers.'}
    ]
    return render_template('about.html', team_members=team_members)

@app.route('/products')
def products():
    productLineUp = [
        {'name': 'Basic Toaster', 'description': 'You know what they say: all toasters toast toast.', 'price': '360kr'},
        {'name': 'Deluxe Vacuum Cleaner', 'description': 'The solution to all your cleaning worries, now more affordable than ever.', 'price': '1300kr'},
        {'name': 'Ultra Mega Vacuum Cleaner', 'description': 'Even more fantastic than the Deluxe vacuum.', 'price': '2600kr'}
    ]
    return render_template('products.html', productLineUp=productLineUp)

@app.route('/advice', methods=['GET', 'POST'])
def advice():
    advice_list = [
        "Always keep learning.",
        "Stay positive and work hard.",
        "Embrace challenges as opportunities.",
        "Communicate clearly and effectively.",
        "Set realistic goals and achieve them."
    ]
    advice_text = ''
    if request.method == 'POST':
        advice_text = random.choice(advice_list)
    return render_template('advice.html', advice=advice_text)

if __name__ == '__main__':
    app.run(debug=True, port=9000)

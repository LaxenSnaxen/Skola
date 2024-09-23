import random
alphabet = "abcdefghijklmnopqrstuvwxyz"
password = ""
numbers = 3
letters = 3
for num in range(letters):
    password += random.choice(alphabet)
for num in range(numbers):
    password += str(random.randint(0, 10))
print (password)
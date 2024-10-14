import json

dictionary = {
    'test.testsson@test.com': 
    {
        'username': 'Test Testsson',
        'password': 'test123'
    }
}

userName = 'User Usersson'
passWord = 'user123'

newDict = {
    'username': userName,
    'password': passWord
}

with open('WESWEB01\HT24\AO1\Projekt\static/test.json', 'r') as openFile:
    file = json.load(openFile)
    file.update({'user.usersson@user.com':newDict})

with open('WESWEB01\HT24\AO1\Projekt\static/test.json', 'w') as outFile:
    outFile.write(json.dumps(file, indent=4))

with open('WESWEB01\HT24\AO1\Projekt\static/test.json', 'r') as openFile:
    file = json.load(openFile)

print(file)
print(type(file))
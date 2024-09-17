import random
import math

# Generera ett namn slumpmässigt.
# förnamn = ["Dave", "Jimmy", "Sarah", "Emily"]
# efternamn = ["Johnson", "Matthews", "Roberts"]
# 
# kompis = random.choice(förnamn) + " " + random.choice(efternamn)
# lärare = random.choice(förnamn) + " " + random.choice(efternamn)
# 
# print("Din kompis:", kompis)
# print("Din lärare:", lärare)

def namnGenerator():
    titlar = ["Slav Mästaren ", "Kyckling Käkaren ", "Ärke Fienden ", "[MASKERAT SKICK] av [MASKERAT SKICK] ", "Tjommen ", "Muppen ", "Lejonet från Norden ", "Soldat Kungen "]
    förnamn = ["Bo ", "Bob ", "Gunilla ", "Ola ", "Bartolomeus ", "Brittmarie ", "Karl ", "Gustavus "]
    efternamn = ["Åkesson", "Emmanuel", "Svensson", "Oxenstierna", "Armfeldt", "Adolphus", "Pfalz-Zweibrücken"]
    genereratNamn = ""
    genereratNamn = genereratNamn + (random.choice(titlar)) + (random.choice(förnamn)) + (random.choice(efternamn))
    return genereratNamn

print (f"Din lärare: {namnGenerator()}\nDin chef: {namnGenerator()}\nDin bästa kompis: {namnGenerator()}\n")

# Omvandla temperatur C till F
temp1C = 23.4
temp2C = 32.6
# 
# temp1F = (temp1C * 1.8) + 32
# print(temp1C, "C =", temp1F, "F")
# 
# temp2F = (temp2C * 1.8) + 32
# print(temp2C, "C =", temp2F, "F")

def celsiusTillFahrenheit(celsius):
    fahrenheit = (celsius * 1.8) + 32
    return fahrenheit

print (f"{temp1C} celsius är {celsiusTillFahrenheit(temp1C)} fahrenheit.")
print (f"{temp2C} celsius är {celsiusTillFahrenheit(temp2C)} fahrenheit.\n")

def meterTillFötter(meter):
    fötter = meter * 3.281
    return fötter

meter1 = 2
meter2 = 1.4

print (f"{meter1} meter är {meterTillFötter(meter1)} fot.")
print (f"{meter2} meter är {meterTillFötter(meter2)} fot.\n")

def kilogramTillPund(kilogram):
    pund = kilogram / 0.454
    return round(pund, 1)

teoretisktRäckHävPB = 93.3
teoretisktRäckPressPB = 105
ryggLyftPB = 100

print(f"Mitt teoretiska pb i räckhäv är {kilogramTillPund(teoretisktRäckHävPB)} lbs.")
print(f"Mitt teoretiska pb i räckpress är {kilogramTillPund(teoretisktRäckPressPB)} lbs.")
print(f"Mitt pb i rygglyft är {kilogramTillPund(ryggLyftPB)} lbs.\n")

def lösenordGenerator(amount):
    alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'å', 'ä', 'ö']
    lösenord = ""
    for num in range(amount):
        lösenord += random.choice(alphabet)
    return lösenord

print(f"Lösenord: {lösenordGenerator(7)}")
print(f"Lösenord: {lösenordGenerator(4)}")
print(f"Lösenord: {lösenordGenerator(11)}\n")

radie1= 2

def cirkelArea(radie):
    area = math.pi*(radie**2)
    return round(area, 1)

print (f"En cirkel med radien {radie1} har arean {cirkelArea(radie1)}\n")


def räknaOrd2(text):
    nonLetterCharacters = ['(', ')', '`', '~', '!', '@', '#', '$', '%', '^', '&', '*', '-', '+', '=',  '|', '\\', '{', '}' '[', ']',  ':', ';',  '"',  "'", '<',  '>',  ',', '.', '?', '/', '_']
    allaOrd = []
    ordLista = []
    lexikon = {}
    text = text.split(" ")

    for ord in text:
        ord.lower().capitalize()
        if ord in ordLista:
            pass
        else:
            ordLista.append(ord)

        if ord in nonLetterCharacters:
            text.replace(ord, "")
        for letter in ord:
            if letter in nonLetterCharacters:
                ordLista[ordLista.index(ord)] = ord.replace(letter, "") 

    for ord in text:
        for letter in ord:
            if letter in nonLetterCharacters:
                ord = ord.replace(letter, "")
        allaOrd.append(ord)

    for ord in ordLista:
        ordMängd = allaOrd.count(ord)
        lexikon[ord] = ordMängd
    
    störst = lexikon[max(lexikon, key=lexikon.get)]
    minst = lexikon[min(lexikon, key=lexikon.get)]
    störstOrd = []
    minstOrd = []

    for key, value in lexikon.items():
        if value == störst:
            störstOrd.append(key)
        if value == minst:
            minstOrd.append(key)

    print (f"{lexikon}\n")
    print (f"De eller det största ord(en/et) är {störstOrd}, med {störst} omnämning(ar).")
    print (f"De eller det minsta ord(en/et) {minstOrd}, med {minst} omnämning(ar).")

räknaOrd2("Green, Green, Apple, Apple, blu nlu blu")
import random
import time
import os

def skrivSakta(text):
    for b in text:
        print (b, end="", flush=True)
        time.sleep(0.07)

def check(ord, lista):
    if ord.lower().capitalize() not in lista:
        stenSaxPåse()

def stenSaxPåse():
    val = ["Sten", "Sax", "Påse"]

    cpu = random.choice(val)
    skrivSakta("Sten, Sax eller Påse? ")
    användare = input()
    check(användare, val)
    användare = användare.lower().capitalize()

    os.system("cls")

    skrivSakta(f"{användare}! mot {cpu}!")
    print("\n")
    if användare == cpu:
        skrivSakta ("Oavgjort!")

    elif val.index(användare) + 1 == val.index(cpu) or val.index(användare) +1 == 3:
        if val.index(användare) + 1 == 3:
            if val.index(cpu) == 0:
                skrivSakta("Du vann!")
        else:
            skrivSakta("Du vann!")

    else:
        skrivSakta ("Du förlora!")
    print("\n")
    skrivSakta("Vill du spela igen? j/n? ")
    if input ("") == "j":
        stenSaxPåse()

stenSaxPåse()
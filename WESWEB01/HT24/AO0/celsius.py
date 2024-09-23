temperatur = input("Hur många grader celsius är det? (Skriv endast siffror.) ")

temperatur = int(temperatur)
if temperatur < -10:
    print("Lite kallt.")
elif temperatur < 10:
    print("Lite kyligt.")
elif temperatur >= 10 and temperatur < 20:
    print("Lagomt varmt.")
if temperatur >= 20 and temperatur < 30:
    print("Rätt så varmt.")
if temperatur >= 30:
    print("För varmt.")
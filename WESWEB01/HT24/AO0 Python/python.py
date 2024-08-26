# 'print' är en inbyggd funktion i Python, den skriver ut text i konsolen.
print("Hello world!")

# 'input' likt print är också en inbyggd funktion, men med den kan man ställa en fråga och sedan spara användarens svar.
# Som 'print' så sker allt detta i konsolen. Alla funktioner som vi själva inte behöver skapa räknas som inbyggda.
namn = input("Vad heter du? ")

print(f"Hej {namn}!")

# I Python, som i de flesta programmerings språk, så finns det variabler och olika sorters datatyper som dessa variabler kan vara.
# Vi använde en variable på linje sex, variabeln 'namn' är datatypen 'string'. String är text.
# Exempel på datatyper.

namn = "Tage"   # 'String',     förk. 'str'.        'String' variabler håller text.
ålder = 63      # 'Integer',    förk. 'int'.        'Integer' variabler håller heltal. 
längd = 1.8     # 'Float',      ingen förkortning.  'Float' variabler håller decimaler. 0.3, 1.5, osv...
lärare = True   # 'Boolean',    förk. 'bool'.       'Boolean' variabler har två tillstånd, 'True' eller 'False'.

# 'If'-satser, med 'If'-satser kan du kolla om någonting är på ett eller annat sätt och sedan köra eller inte köra viss kod.
# Med koden nedan kollar vi om 'ålder' är lika med eller mer än 18. Om 'ålder' inte är 18 eller mer, så körs 'else:' istället.

pengar = 5000.0

if ålder >= 18: 
    print ("Du får spela hasardspel.")

    # En till 'if'-sats för att spinna vidare på logiken.
    if pengar > 5000.0:
        print ("Du har råd att spela en runda i lotteriet.")

    else:
        print ("Men det borde du inte, spara lite pengar först.")

else:
    print ("Du får inte spela hasardspel.")

# ÖVNING:
# Skapat ett program (separat fil) som frågar användaren om en temperatur och skriver ut ett meddelande.
# - Under 10c°: "Ganska kyligt!".
# - Mellan 10c° och 20c°: "Någorlunda varm!"
# - Mellan 20c° och 30c°: "Ganska varmt!"
# - Över 30c°: "Rätt så jävla varmt!"

# UTMANING:
# Skapa sten-sax-påse i Python.
# Spelaren väljer sitt drag och datorn väljer sitt.
# Slumpmässigt.
# Programmet skriver ut resultatet.
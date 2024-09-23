# Skapandet av föremål.

järnsvärd =             {
    "namn": "Järnsvärd", 
    "kategori": "vapen",
    "skada": 20
                        }
hälsobryggd =           {
    "namn": "Hälsobryggd",
    "kategori": "brygd", 
    "helande": 30
                        }
reflektivtHalsband =    {
    "namn": "Reflektivt halsband", 
    "kategori": "försvar", 
    "skydd": 2, 
    "effekt skydd": "Diamantisering."
                        }
hjälm =                 {
    "namn": "Hjälm", 
    "kategori": "försvar", 
    "skydd": 5
                        }
järnByxor =             {
    "namn": "Järnbyxor", 
    "kategori": "försvar", 
    "skydd": 24         }
odensLäderskärp =       {
    "namn": "Odens Läderskärp", 
    "kategori": "försvar", 
    "skydd": 999, 
    "effekt skydd": ["Förgiftning", "Yrsel"]
                        }

föremål = [järnsvärd, järnByxor, hälsobryggd, reflektivtHalsband, hjälm, odensLäderskärp]

# Attribut från föremålet 'Odens Läderskärp
print (f"Namn: {odensLäderskärp['namn']}\nKategori: {odensLäderskärp['kategori']}\nSkydd: {odensLäderskärp['skydd']}\nSkyddar mot effekter: {odensLäderskärp['effekt skydd']}")

# Skriver ut alla föremål som kan skydda mot effekter.
for värde in föremål:
    if värde['kategori'] == 'försvar' and 'effekt skydd' in värde:
        print(f"Föremål som skyddar mot effekter: {värde['namn']}")
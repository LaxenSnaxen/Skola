def meterTillFötter(meter):
    fötter = meter * 3.281
    return fötter

meter1 = 2
meter2 = 1.4

print (f"{meter1} meter är {meterTillFötter(meter1)} fot.")
print (f"{meter2} meter är {meterTillFötter(meter2)} fot.")

def kilogramTillPund(kilogram):
    pund = kilogram / 0.454
    return round(pund, 1)

teoretisktRäckHävPB = 93.3
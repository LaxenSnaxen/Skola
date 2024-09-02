import matplotlib.pyplot as plt
import numpy as np

data = [
    [0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1,],
    [1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,],
    [0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1,],
    [1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,],
    [0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1,],
    [1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,],
    [0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1,],
    [1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,],
    [0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1,],
    [1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,],
    [0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1,],
    [1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,]
]

# SKRIV DIN LÖSNING HÄR
# ---------------------

# Rensar skärmen, byter färg på varje cell till vit.

heightWidth = -1
for list in range(len(data)):
    heightWidth += 1
    for num in range(len(data[list])):
        data[list][num] = 0
# Alternativt Robin visade mig efter han googlade (mer effektivt?)
# for x in range (len(data)):
#   data[x] = [0] * len(data)
#

## 1
#for list in range(len(data)):
#    if list == 0 or list == len(data[list])-1:
#        for num in range(len(data[list])):
#            if num == 0 or num == len(data[list])-1:
#                data[list][num] = 1

## 2, Robins sätt ksk segare?
#data[len(data)//2][len(data)//2] = 1
#data[len(data)//2-1][len(data)//2-1] = 1
#data[len(data)//2][len(data)//2-1] = 1
#data[len(data)//2-1][len(data)//2] = 1

## 3
#for list in range(len(data)):
#    for num in range(len(data[list])):
#        if list == 0 or list == len(data)-1 or num == 0 or num == len(data)-1:
#            data[list][num] = 1

## 4, alternativt != %2 för att få mönstret ett snäpp neråt
#for list in range(len(data)):
#    if list %2:
#        for num in range(len(data[list])):
#            data[list][num] = 1

#5
#for list in range(len(data)):
#    for num in range(len(data[list])):
#
#        for num in range(len(data[list])):
#            if num %2:
#                data[list][num] = 1

# 6
#dataRange = (len(data))
#midPoint = dataRange//2
#
#for list in range(len(data)):
#    for num in range(len(data[list])):
#
#        if num  > 3 and num < 8 or list > 3 and list < 8:
#            if list == 0 or list == len(data)-1 or num == 0 or num == len(data)-1:
#                data[list][num] = 1
#
#        if num < 10 and num > 1 and num != midPoint or list < 10 and list > 1 and list != midPoint:
#            if list != 0 and list != 11 and num != 0 and num != 11: #and list != 5 and num != 5 and list != 6 and num != 6:
#                    data[list][num] = 1

def setSize(num):
    global data
    data = []
    for x in range(num):
        data.append([0]*num)

setSize(100)

# Ritar cirkeln
radius = (len(data)-1)/2
for x in range(len(data)):
    for y in range(len(data[list])):
        if (x-radius)**2 + (y-radius)**2 <= radius**2:
            data[x][y] = 1

# Rensar cirkeln
radius = radius - 1.5
for x in range(len(data)):
    for y in range(len(data[list])):
        if (x-1.5-radius)**2 + (y-1.5-radius)**2 <= radius**2:
            data[x][y] = 0
# ---------------------

grid = np.array(data)
fig, ax = plt.subplots()
cmap = plt.get_cmap('Greys')
ax.imshow(grid, cmap=cmap)

#ax.set_xticks(np.arange(-0.5, len(data), 1), minor=True)
#ax.set_yticks(np.arange(-0.5, len(data), 1), minor=True)
ax.grid(which='minor', color='black', linestyle='-', linewidth=2)

ax.tick_params(which='both', size=0, labelbottom=False, labelleft=False)

plt.show()
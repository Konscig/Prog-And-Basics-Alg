from random import randint

massive = []
ansv = []
if massive == []:
    while massive == []:
        for i in range(randint(1, 10), randint(1, 10)):
            massive.append(randint(1, i))

for i in range(0, len(massive)):
    b = 0
    for j in range(0, i+1):
        b += massive[j]
    ansv.append(b)

print(massive, ansv)
from random import randint

def makelist() -> list:
    array = []
    for i in range(randint(1, 100), randint(1, 100)):
            array.append(randint(1, i))
    return array

def switch_values(array: list) -> list:
    ansv = []
    for i in range(0, len(array)):
        b = 0
        for j in range(0, i+1):
            b += array[j]
        ansv.append(b)
    return ansv

a = makelist()
if a == []: 
    while a == []:
        a = makelist()

print(f'old list: {a}\n\nnew list: {switch_values(a)}')
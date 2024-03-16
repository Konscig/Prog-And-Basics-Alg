from copy import copy
from random import randint
from datetime import *

n = int(input('введите длину массива '))
massive = [0]*n

k1, k2, k3 = 0, 0, 0

for i in range(len(massive) - 1):
    massive[i] = randint(-10000, 10000)/randint(1, 100)

massive1 = copy(massive)
massive2 = copy(massive)

def bubble(array):
    global k1
    start_time = datetime.now()
    for i in range(0, len(array) - 1):
        for j in range(0, len(array) - i - 1):
            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]
                k1 += 1
    end_time = datetime.now()
    bubble_time = end_time - start_time
    return bubble_time

def selection(array):
    global k2
    start_time = datetime.now()
    for i in range(len(array) - 1):
        m = i
        j = i + 1
        while j < len(array):
            if array[j] < array[m]:
                m = j
            j = j + 1
        array[i], array[m] = array[m], array[i]
        k2 += 1
    end_time = datetime.now()
    selection_time = end_time - start_time
    return selection_time

def insertion(array):
    global k3
    start_time = datetime.now()
    for i in range(1, len(array)):
        key = array[i]
        j = i-1
        while j >=0 and key < array[j] :
            array[j+1] = array[j]
            j -= 1
        array[j+1] = key
        k3 += 1
    end_time = datetime.now()
    insertion_time = end_time - start_time
    return insertion_time

print(massive)
print(f'{bubble(massive)} перестановок: {k1}\
    \n{selection(massive1)} перестановок: {k2}\
    \n{insertion(massive2)} перестановок: {k3}')
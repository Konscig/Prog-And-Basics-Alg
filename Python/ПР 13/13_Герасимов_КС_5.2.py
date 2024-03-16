import random

def create_array(n:int, m:int) -> list:
    arr = []
    for i in range(n):
        arr.append([random.randint(-100, 100)\
             for j in range(m)])
    return arr

array = create_array(int(input('Введите количество строк: ')), int(input('Введите количество столбцов: ')))

def change_values(array:list):
    copied = []
    abslist = []
    key = int()
    for i in range(len(array)):
        copied = array[i].copy()
        abslist = list(map(abs, copied))
        key = abslist.index(max(abslist))
        array[i][0], array[i][key] = array[i][key], array[i][0]
        for j in range(len(array[0])):
            print(array[i][j], end=' ')
        print()

def show_array(array:list):
    for i in range(len(array)):
        for j in range(len(array[0])):
            print(array[i][j], end=' ')
        print()

show_array(array)
print()
change_values(array)
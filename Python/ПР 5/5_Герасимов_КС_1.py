from math import *
n1 = int(input('Введите начало диапазона: '))
n2 = int(input('Введите конец диапазона: '))
if n2 < n1:
    while n2 < n1:
        n2 = int(input('Пожалуйста, введите конец диапазона больше чем начало: '))
s = 0
h = 0
for i in range(n1, n2+1):
    if fabs(cos(i)) < 0.5:
        h += 1
        s += i
if h == 0 and s == 0:
    print('Значений подходящих условию - нет.')
else:
    print(f'Колличество равно {h}, сумма равна {s}.')
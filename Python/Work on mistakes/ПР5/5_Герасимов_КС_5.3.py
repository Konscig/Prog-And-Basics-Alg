from math import *

n = int(input('Введите конец диапазона: '))
sum_sin = 0
sum_etog = 0

for i in range(1, n+1):
    sum_sin = 0
    for j in range(1, i+1):
        sum_sin += sin(j)
    if sum_sin != 0:
        sum_etog += 1/sum_sin

print(f'Итоговая сумма равна: {sum_etog}.')
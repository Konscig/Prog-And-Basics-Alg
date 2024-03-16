from random import randint

answer = []
massive = []

n, m = int(input()), int(input())
for i in range(n):
    massive.append([0]*m)
for i in range(0, len(massive)):
    for j in range(0, len(massive[i])):
        massive[i][j] = randint(-1000, 100)
    print(*massive[i], end='\n')

maximum = massive[0][1]

for i in range(0, n, 1):
    for j in range(1, m, 1):
        if massive[i][j] >= maximum:
            maximum = massive[i][j]
for i in range(0, n):
    for j in range(0, m):
        if massive[i][j] > maximum:
            answer.append([massive[i][j], i, j])

if len(answer) != 0:
    for i in range(len(answer)):
        print(f"Число: {answer[i][0]}; строкa: {answer[i][1]}, столбец: {answer[i][2]}")
else: print(f'Не найдено чисел, больших {maximum}.')
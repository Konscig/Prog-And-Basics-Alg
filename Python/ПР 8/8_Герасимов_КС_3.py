from random import randint

massive = []
n, m = int(input()), int(input())
for i in range(n):
    massive.append([0]*m)
for i in range(0, len(massive)):
    for j in range(0, len(massive[i])):
        massive[i][j] = randint(-10, 10)
for i in range(len(massive)):
        print(*massive[i], '\n')
        
k = 0
first_str = []
for i in range(1, len(massive)):
    for j in range(0, len(massive[i])):
        if massive[i][j] == 0:
            first_str.append(massive[i])
            k = i

if first_str != []:
    massive[k] = first_str[0]
    massive[0], massive[k] = massive[k], massive[0]
    print('--------------')
    for i in range(len(massive)):
        print(*massive[i], '\n')
else:
    print('Нулевых элементов нет!')

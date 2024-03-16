from random import randint

ansver = []
massive = []

n, m = int(input()), int(input())
for i in range(n):
    massive.append([0]*m)
for i in range(0, len(massive)):
    for j in range(0, len(massive[i])):
        massive[i][j] = randint(-1000, 1000)

for i in range(len(massive)):
    print(*massive[i], '\n')

for i in range(0, len(massive), 2):
    for j in range(0, len(massive[i])):
        if massive[i][j] != 0:
            if (massive[i][j] % 8 == 0) and (massive[i][j] % 15 == 0):
                ansver.append(massive[i][j])
if ansver == []:
    print('Таких чисел нет!')
else:
    print('-------\n', *ansver, '\n-------')
    for i in range(len(ansver)-1, -1, -1):
        print(ansver[i], end=' ')
    #print('-------\n', *ansver, '\n-------\n', *ansver[::-1])

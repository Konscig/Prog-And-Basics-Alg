from random import randint

massive = []

n, m = int(input()), int(input())
for i in range(n):
    massive.append([0]*m)
for i in range(0, len(massive)):
    for j in range(0, len(massive[i])):
        massive[i][j] = randint(-10, 10)
    print(*massive[i], end='\n')

change = []
for i in range(n):
    if massive[i][0] == 0:
        change = massive[i]
        massive[i] = massive[0]
        massive[0] = change

print()
for i in range(0, len(massive)):    
    print(*massive[i], end='\n')
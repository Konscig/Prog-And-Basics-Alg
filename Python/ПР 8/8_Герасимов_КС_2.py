from random import randint

ansver = []
massive = []
max = 0
def insertion(array=list):
    for i in range(1, len(array)):
        key = array[i]
        j = i-1
        while j >=0 and key < array[j] :
            array[j+1] = array[j]
            j -= 1
        array[j+1] = key
    return array

n, m = int(input()), int(input())
for i in range(n):
    massive.append([0]*m)
for i in range(0, len(massive)):
    for j in range(0, len(massive[i])):
        massive[i][j] = randint(-1000, 1000)

for i in range(len(massive)):
    print(*massive[i], '\n')

for i in range(0, len(massive), 2):
    for j in range(1, len(massive[i]), 2):
        max = insertion(massive[i])[-1]

for i in range(0, len(massive)):
    for j in range(0, len(massive[i])):
        if massive[i][j] > max:
            ansver.append([massive[i][j], i, j])
print(*ansver)
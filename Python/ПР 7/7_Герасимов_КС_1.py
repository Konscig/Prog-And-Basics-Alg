from random import randint

n = int(input("введите длину массива "))
massive = [0]*n
for i in range(0, len(massive) - 1):
    massive[i] = randint(-100, 100)

k = int(input("введите количество отсортированных элементов "))
for i in range(0, k):
    for j in range(0, k - i - 1):
        if massive[j] < massive[j+1]:
            massive[j], massive[j+1] = massive[j+1], massive[j]

print(f'{massive} - прошла сортировка пузырьком до {k} элемента')

for i in range(k, len(massive) - 1):
        m = i
        j = i + 1
        while j < len(massive):
            if massive[j] < massive[m]:
                m = j
            j = j + 1
        massive[i], massive[m] = massive[m], massive[i]

print(f'{massive} - прошла сортировка выбором от {k} элемента до конца массива')
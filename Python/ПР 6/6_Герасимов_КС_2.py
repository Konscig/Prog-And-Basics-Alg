from random import randint

massive = []
ansv = []
for i in range(randint(1, 1000), randint(1, 1000)):
    massive.append(randint(1, i))
if massive != []:
    for i in range(0, len(massive)):
        if massive[i] % 4 == 0:
            ansv.append(str(massive[i]))
if ansv == []:
    print('Таких чисел в вашем массиве нет!')
else:
    print(f'В массиве найдено {len(ansv)} чисел, кратных 4:')
    k = 0
    for i in range(len(ansv)-1, -1, -1):
        print(ansv[i], end=' ')
        k+=1
        if k == 5:
            print()
            k = 0
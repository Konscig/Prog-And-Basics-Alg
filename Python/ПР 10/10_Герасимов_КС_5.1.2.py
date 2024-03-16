array = input().split()
crat3 = 0
sumindx3 = 0
if len(array) >= 10:
    for i in range(len(array)):
        array[i] = int(array[i])
        if array[i] % 3 == 0:
            crat3 += 1
    if crat3 == 0:
        for i in range(2, len(array), 3):
            sumindx3 += array[i]
        print(f'Сумма элементов массива, индексы которых кратны 3 = {sumindx3}')
    else:
        print(f'Колличество элементов массива, кратных трем = {crat3}')
def insertion(array):
    for i in range(1, len(array)):
        key = array[i]
        j = i-1
        while j >=0 and key < array[j] :
            array[j+1] = array[j]
            j -= 1
        array[j+1] = key
    return array[0]

array = input().split()
mincrat4 = []
sumcrat4 = 0
if len(array) >= 10:
    for i in range(len(array)):
        array[i] = int(array[i])
        if array[i] % 4 == 0:
            mincrat4.append(array[i])
    if mincrat4 == []:
        for i in range(3, len(array), 4):
            sumcrat4 += array[i]
        print(f'Сумма элементов массива, индексы которых кратны 4 = {sumcrat4}')
    else:
        print(f'Минимальный элемент массива, кратный 4 = {insertion(mincrat4)}')
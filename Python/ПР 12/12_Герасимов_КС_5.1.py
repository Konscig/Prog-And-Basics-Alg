def createArray() -> list:
    return list(map(float, input('Введите значения элементов массива через пробел: ').split()))
array = createArray()

def showMassive(massive: list):
    print(*massive)

def changeValue(massive: list, index: int):
    value = float(input('Введите значение элемента: '))
    if index < len(massive)-1:
        massive[index] = value
    else: print('Вы ввели неверный индекс! ')

def midArifmeticValue(massive: list):
    sumOfNums = 0
    count = 0
    for i in range(0, len(massive)):
            if massive[i] < 0:
                sumOfNums+=massive[i]
                count+=1
    if sumOfNums != 0:
        print(f'Среднарифметическое отрицательных элементов массива равно {sumOfNums/count}.')
    else: print('Отрицательных элементов в массиве нет.')

def plusVarInDiffWay(massive: list):
    count = 0
    for i in range(len(massive)-1,-1,-1):
        if massive[i] > 0:
            print(massive[i],end=" ")
            count+=1
    if(count==0):
        print('Положительных элементов нет.',end=" ")
    print()

def bubbleSort(massive: list):
    for i in range(0, len(massive) - 1):
        for j in range(0, len(massive) - i - 1):
            if massive[j] > massive[j+1]:
                massive[j], massive[j+1] = massive[j+1], massive[j]
    print(*massive)

def main():
    while True:
        print('1. Вывод массива на экран\n2. Редактировать i-ый элемент массива\n3. Вычислить среднеарифметическое отрицательных элементов массива\n4. Вывести положительные элементы на экран в обратном порядке\n5. Отсортировать массив методом "пузырька" и вывести его на экран\n6. Выход.\nВведите номер желаемого пункта: ')
        answer = input()
        if answer == '1':
            showMassive(array)
            continue
        if answer == '2': 
            changeValue(array, int(input(f'Введите индекс элемента (0-{len(array)-1}), который хотите изменить: ')))
            continue
        if answer == '3':
            midArifmeticValue(array)
            continue
        if answer == '4':
            plusVarInDiffWay(array)
            continue
        if answer == '5':
            bubbleSort(array)
            continue
        if answer == '6':
            break
main()
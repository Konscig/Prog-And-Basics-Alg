import random
def create_array(n:int, m:int) -> list:
    arr = []
    for i in range(n):
        arr.append([random.randint(-100, 100)\
             for j in range(m)])
    return arr

array = create_array(int(input('Введите количество строк: ')), int(input('Введите количество столбцов: ')))

def show_array(array:list):
    for i in range(len(array)):
        for j in range(len(array[0])):
            print(array[i][j], end=' ')
        print()

def change_value(array:list, index_i:int, index_j:int, value):
    if (0 <= index_i < len(array)) and (0 <= index_j < len(array[0])):
        array[index_i][index_j] = value
    else: print(" ")

def multuply_elements(array:list):
    result = 1
    check_list = []
    for i in range(0, len(array)):
        for j in range(0, len(array[0])):
            if array[i][j] % 2 != 0:
                result *= array[i][j]
                check_list.append(array[i][j])
    if check_list == []:
        print('Нечетных элементов не обнаружено!')
    else:
        print(f'Произведение нечётных элементов равно: {result}.')

def elements_finder(array:list):
    element_sum = 0
    count = 0
    for i in range(1, len(array), 2):
        for j in range(0, len(array[0]), 2):
            if (array[i][j] < 0) and (array[i][j] % 4 == 0):
                element_sum += array[i][j]
    if element_sum == 0:        
        print("Элементов, удовлетворяющих условию - нет")
        return
    else: 
        print(f'Сумма минимальных элементов: {element_sum}')
    for i in range(0, len(array)):
        for j in range(0, len(array[0])):
            if array[i][j] < element_sum:
                print(f'Элемент {array[i][j]}, строкa: {i}, столбец: {j}')
                count += 1
    if count == 0:
        print("Элементов, удовлетворяющих условию - нет")
        return

def main():
    while True:
        print('1. Вывод массива на экран\n2. Редактировать i-ый элемент массива\n3. Вычислить произведение нечетных элементов массива\n4. Для элементов массива, находящихся в четных строках и нечетных столбцах найти сумму отрицательных элементов, кратных 4 и вывести на экран все элементы массива меньше найденной суммы и их индексы.\n5. Выход.\nВведите номер желаемого пункта: ')
        answer = input()
        if answer == '1':
            show_array(array)
            continue
        if answer == '2': 
            change_value(array, int(input(f"Введите индекс (0-{len(array)-1}) строки, в которой вы хотите изменить значение элемента: ")), \
                int(input(f"Введите индекс (0-{len(array[0])-1}) столбца, в котором вы хотите поменять значение элемента: ")), \
                    int(input('Введите новое значение этого элемента: ')))
            continue
        if answer == '3':
            multuply_elements(array)
            continue
        if answer == '4':
            elements_finder(array)
            continue
        if answer == '5':
            break
main()
    
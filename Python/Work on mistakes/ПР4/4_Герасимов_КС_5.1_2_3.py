x = int(input('введите число '))
n = int(input('какая цифра там должна быть? '))
flag = False

while x > 0:
    if x % 10 == n:
        print('число найдено!')
        flag = True
        break
    else:
        x//=10

if flag == False:
    print('Введённое число не обнаружено!')
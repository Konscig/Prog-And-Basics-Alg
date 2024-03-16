x = int(input('введите число '))
n = int(input('какая цифра там должна быть? '))

while x > 0:
    if x % 10 == n:
        print('число найдено!')
        break
    else:
        x//=10
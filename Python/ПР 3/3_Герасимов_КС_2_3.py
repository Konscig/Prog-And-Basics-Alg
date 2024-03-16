a = [int(input('Введите абсциссу: ')), int(input('Введите ординату: '))]
r = (a[0]**2+a[1]**2)**0.5
if (r == 3 or r == 8) and a[0] <= 0:
    print('На границе')
elif 3<=r<=8 and a[0] <= 0:
    print('Да')
else:
    print('Нет')
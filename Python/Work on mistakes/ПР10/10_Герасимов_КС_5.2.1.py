n = int(input('Введите конец диапазона: '))

if n >= 0:
    a = -1
    f = 1
    summa = 0
    b = 0

    for k in range(0, n+1):
        a *= -1
        b = (k+1)**3
        if k == 0:
            f = 1
        else:
            f *= 2*k*(2*k-1)
        summa += (a*b)/f
print(summa)
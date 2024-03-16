summa = 0
k = 0
for i in range(10, 100):
    while i > 0:
        summa += (i % 10)**2
        i//=10
    if summa % 13 == 0:
        k += 1
print(f'Чисел, сумма квадратов цифр которых кратна 13: {k}')
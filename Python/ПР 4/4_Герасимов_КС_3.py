from math import factorial
summa = 0
el = ((-1)**0*1)/1
n = 1
e = float(input('введите эпсилон'))
while el > e:
    summa += el
    n += 1
    el = ((-1)**(n-1)*factorial(n))/n**n

print(summa)
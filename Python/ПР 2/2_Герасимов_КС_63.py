def min1(n):
    a =[]
    for i in range(3):
        a.append(n%10)
        n//=10
    if min(a) % 2 != 0:
        return True
    else:
        return False
print(min1(int(input('Введите число: '))))
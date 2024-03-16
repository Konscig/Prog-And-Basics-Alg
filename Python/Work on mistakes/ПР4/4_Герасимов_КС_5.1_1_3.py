from math import cos
p = 1
while True:
    x = int(input())
    if x % 3 != 0:
        print('введено число не крастное 3')
        break
    p *= cos(x)
print(p)
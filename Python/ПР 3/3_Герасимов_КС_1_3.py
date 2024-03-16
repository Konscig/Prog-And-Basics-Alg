def F(a, b, c, x):
    if c < 0 and x != 0:
        return (-a)*x-c
    elif c > 0 and x == 0:
        return (x-a)/(-c)
    elif (c-a) != 0:
        return b*x/(c-a)

print(F(int(input('a = ')), int(input('b = ')), int(input('c = ')), int(input('x = '))), end='\n')
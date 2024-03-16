def sum(eps, i = 1, f = 1):
    a = 2/f
    if a >= eps:
        f=3*f*(3*f-1)*(3*f-2)
        return a + sum(eps, i+1, f)
    return 0
print(sum(0.1))
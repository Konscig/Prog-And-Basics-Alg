def sum(n, i = 1, f = 2):
    if i <= n:
        f *= 2*f * (2*f-1)
        a = f/(4*i+1)
        return a + sum(n, i+1)
    return 0
print(sum(5))
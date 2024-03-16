n = int(input())

if n >= 1:
    z = 1
    f = 1
    s = 1.0

    for k in range(1, n+1):
        z *= -1
        c = (k+1)**3
        f *= 2*k*(2*k-1)
        s += (z*c)/f

print(s)

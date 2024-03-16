result = True
ap = []
num = int(input())
while num > 0:
    ap.append(num%10)
    num//=10
minn = min(ap)
if minn % 2 == 0:
    result = False
print(result)
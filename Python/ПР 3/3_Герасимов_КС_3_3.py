import math

x = float(input())
if -9<=x<=-5:
    y = 2 - (4 - (x + 7)**2)**0.5
elif -5<x<=-4:
    y = 2
elif -4<x<=0:
    y = -0.5*x
elif 0<x<=math.pi:
    y = math.sin(x)
elif math.pi<x<=5:
    y = x - math.pi
print(y)

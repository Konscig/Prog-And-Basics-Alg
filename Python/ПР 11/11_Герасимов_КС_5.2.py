from math import *

def tg(x):
    if x-4 > 0:  
        return tan((log((x-4), e))**3)
    else: return "Невозможно вычислить значение"
def div(x):
    if ((1 + 2*x**5 + sin(x))**(1/4) - 4) > 0:
        return 1/((1 + 2*x**5 + sin(x))**(1/4) - 4)
    else: return "Невозможно вычислить значение"
def lg(x):
    if x != 0:
        return log10(6+x**2) - (7/x)
    else: return "Невозможно вычислить значение"
def fprint(x):
    print(f"При х = {x} -> {tg(x)}")

for x in range(3, 10):
    fprint(x)
for x in range(10, 16):
    fprint(x)
for x in range(16, 26):
    fprint(x)

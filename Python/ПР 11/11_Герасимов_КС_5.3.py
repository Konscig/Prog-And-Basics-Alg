from math import sqrt, cos
def theMostBigger(a:float, b:float, alfa:float) -> float:
    c = sqrt((a**2+b**2)-(2*a*b*cos(alfa)))
    tre = [a, b, c]
    p = (a+b+c)/2
    s = sqrt(p*(p-a)*(p-b)*(p-c))
    return 2*s/min(tre)

print(f"Наибольшая высота треугольника = {theMostBigger(float(input('Введите первую сторону треугольника ')),float(input('Введите вторую сторону треугольника ')), float(input('Введите угол между двумя сторонами ')))}")
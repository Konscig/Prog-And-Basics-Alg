def r(a:float) -> float:
    if a > 0:
        return a/2
    else:
        return "Радиус не может быть отрицательным"
print(f"Радиус окружности, вписанной в квадрат = {r(float(input()))}")
def stroking(stroke):
    if '.' in stroke:
        answerstroke = str()
        strokelist = stroke.split('.')
        for i in range(len(strokelist)):
            answerstroke += strokelist[i]
        count = len(stroke) - len(answerstroke)
        print(f'Итоговая строка: {answerstroke}, удалённых символов "." = {count}.')
    else:
        print("Нет точек в строке.")

stroking(input('Введите строку символов: '))
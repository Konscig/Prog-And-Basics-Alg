def utin(string: str):
    words = {'T', 'S', 'H', 'F', 'K', 'X', 'C', 'P'}
    listik = string.split()
    ans = set()
    for i in range(len(listik)):
        listik[i] = set(listik[i])

    listik.sort(key = lambda s: len(s))
    
    for i in range(len(listik)):
        listik[i] = listik[i] & words 
    print(*listik[0], *listik[1])
    
print('Введите строку, состоящую из слов, состоящих только из заглавных латинских букв: ')
flag = False
while flag == False:
    centence = input()
    if centence.isupper() == False:
        cent = centence.split()
        for i in range(len(cent)):
            if len(cent[i]) > 80:
                print('Вы ввели неверное предложение! ')
        print('Вы ввели неверное предложение! ')
    else:
        flag = True
        break
utin(centence)

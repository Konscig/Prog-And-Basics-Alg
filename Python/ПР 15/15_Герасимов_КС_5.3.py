def removing_ints(stroke: str):
    num_list = list(map(str, range(0, 9, 2)))
    strokelist = stroke.split(' ')
    index = []
    for i in range(len(strokelist)):
        count = 0
        stroke1 = strokelist[i]
        for j in range(len(stroke1)):
            if stroke1[j] in num_list:
                count += 1
        if count < 3:
            index.append(stroke1)
    answ = str()
    for i in range(len(index)):
        answ += index[i] + ' '
    return answ

print(removing_ints(input('')))
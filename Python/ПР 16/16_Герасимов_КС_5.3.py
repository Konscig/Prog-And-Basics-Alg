def udalitel():
    nums = list(map(str, range(0, 10)))
    wre = []
    with open('file.txt', 'r') as f:
        strokes = f.readlines()
        for i in range(len(strokes)):
            for sym in range(len(strokes[i])-2):
                if (strokes[i][sym] in nums) and (strokes[i][sym+1] in nums) and (strokes[i][sym+2] not in nums):
                    wre.append(strokes[i])
    for i in range(len(wre)):
        print(wre[i], end=' ')         
        print()
udalitel()
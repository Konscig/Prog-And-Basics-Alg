def count_symbols(stroke: str):
    count = int()
    stroke = stroke.replace('01', '0 1')
    stroke = stroke.replace('10', '1 0')
    strokelist = stroke.split(' ')
    count = max(strokelist, key=len)
    print(f"Самая большая группа = {len(count)}")
count_symbols(input())
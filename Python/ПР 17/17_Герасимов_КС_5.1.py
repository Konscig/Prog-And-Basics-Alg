glossary = dict()

def read(filename, glossary):
    with open(filename, 'r', encoding='utf-8') as f:
        for line in f:
            line = line.replace('\\n', '\n').replace('\\t', '\t').replace('\\r', '\r') # для замены экранированных символов на всякие отступы и энтеры
            line = line.strip() # для удаление всякого мусора
            pair = line.split(':')
            print(":".join(pair[1:]))
            if len(pair) <= 2:
                glossary[pair[0]] = str(":".join(pair[1:]))

def write(filename, glossary):
    with open(filename, 'w') as f:
        for key, value in glossary.items():
            s = key + ':' + value + '\n'
            f.write(s)

def add_termin(glossary, key: str, value):
    if glossary.get(key) == None:
        glossary[key] = value
    else:
        print('Такой термин уже существует в глоссарии. ')

def delete_termin(glossary, key):
    if glossary.get(key) != None:
        del glossary[key]
    else:
        print('Такого термина нет в глоссарии. ')

def show_dict(glossary):
    for key, value in glossary.items():
        print(f'{key}: {str(value)}')
    
def search_item(glossary, key):
    print(f'Термин {key}: {str(glossary[key])} ')

def main():
    while True:
        print('1) Создание/дополнение глоссария на основе файла\n2) Сохранение глоссраия в файл\n3) Дополнение глоссария термином\n4) Удаление термина из глоссария\n5) Вывод глоссария на экран\n6) Поиск термина и его вывод на экран\n7) Выход.')
        answer = input()
        if answer == '1':
            read('termins.txt', glossary)
        if answer == '2':
            write('termins.txt', glossary)
        if answer == '3':
            add_termin(glossary, input('Введите термин '), input('Введите толкование '))
        if answer == '4':
            delete_termin(glossary, input('Введите термин, который нужно удалить '))
        if answer == '5':
            show_dict(glossary)
        if answer == '6':
            search_item(glossary, input('Введите название термина: '))
        if answer == '7':
            break
main()

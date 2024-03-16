from random import randint

def add_info(flightname: str, flightnum: str, typeofairplane: str):
    with open('Data_base.txt', 'a') as f:
        f.write(f'{flightname};{flightnum};{typeofairplane}' + '\n')

def view_info(flightnum: str):
    flightlist = []
    ready = []
    with open('Data_base.txt', 'r') as f:
        flights = f.readlines()
        for num in range(len(flights)):
            flightlist.append(flights[num].split(';'))
        for i in range(0, len(flightlist)):
            if flightnum == flightlist[i][1]:
                ready.append(flightlist[i])
        if ready != []:
            if len(ready) > 1:
                print(f'Обнаружено {len(ready)} рейсов {flightnum}, выполняющихся в разное время: ')
                for i in range(len(ready)):
                    print(f'Рейс {flightnum} следующий в город {ready[i][0].capitalize()} выполняется на борту {ready[i][2].capitalize()}', end='')
            elif len(ready) == 1:
                print(f'Обнаружен {len(ready)} рейс {flightnum}: ')
                print(f'Рейс {flightnum} следующий в город {ready[0][0].capitalize()} выполняется на борту {ready[0][2].capitalize()}', end='')
        else:
            print(f'Рейс с номером {flightnum} не обнаружен')

def generate_db():
    cities = ['astana', 'moscow', 'london', 'Saint-Peterburg', 'tokyo', 'toronto', 'atlanta', 'krasnoyrarsk', 'rostov-on-Don', 'Vladivostok', 'kerch', 'Tyumen',\
        'artem', 'stockholm', 'budapesht', 'berlin']
    airplanes = ['A320', 'Boeing770', 'Boeing707', 'SukhoiSuperJet']
    with open('Data_base.txt', 'a') as f:
        for i in range(1000):
            f.write(f'{cities[randint(0, len(cities)-1)]};{randint(100,999)};{airplanes[randint(0, len(airplanes)-1)]}' + '\n')

def show_me_db(start_ind: int, end_ind: int):
    with open('Data_base.txt', 'r') as f:
        flights = f.readlines()
        for i in range(start_ind-1, end_ind):
            print(flights[i], end='')
        
def main():
    while True:
        print('Выберите пункт меню:\n1.Добавить информацию о рейсе;\n2.Вывести информацию о рейсе по его номеру;\n3.Сгенерировать базу данных из 1000 строк;\n4.Вывести кусок бaзы данных на экран;\n5.Выход.\nОтвет: ')
        answer = input()
        if answer == '1':
            add_info(input('Введите, пожалуйста, место назначения на английском: '),\
                input('Введите, пожалуйста номер рейса: '), input('Введите тип самолёта: '))
            continue
        if answer == '2':
            view_info(input('Введите, пожалуйста, номер рейса, о котором вы хотите узнать информацию: '))
            continue
        if answer == '3':
            generate_db()
            continue
        if answer == '4':
            show_me_db(int(input('Введите строку, с которой начнется вывод информации: ')), int(input('Введите строку, на которой вы хотите закончить вывод информации:')))
            continue
        if answer == '5':
            break
main()
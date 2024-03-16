#include <iostream>
#include <cmath>

using namespace std;

double f1(double x), f2(double x), f3(double x), f4(double x), f5(double x), f6(double x), f7(double x);

typedef double (*f_ptr)(double);

int get_choice() {
    int choice;
    cout << "******************************\n" << "*            Меню            *\n" << "******************************\n";
    cout << "Выберите функцию:\n";
    cout << "1. 1 / (1 + x^2)\n";
    cout << "2. arccos(sqrt(x))\n";
    cout << "3. ln((1 + x)/(1 - x))\n";
    cout << "4. e^(x - 1)\n";
    cout << "5. sin(sqrt(x))\n";
    cout << "6. arctg(1/x)\n";
    cout << "7. ln^2(x + 1/x)\n";
    cout << "Выберите номер функции (1-7): ";
    cin >> choice;
    return choice;
}

// Функция для вычисления значения функции в точке x
double compute(f_ptr func, double x) {
    return func(x);
}

int main() {
    double x, result;
    int choice = get_choice();

    // Установка указателя на выбранную функцию
    f_ptr func;
    switch(choice) {
        case 1:
            func = &f1;
            break;
        case 2:
            func = &f2;
            break;
        case 3:
            func = &f3;
            break;
        case 4:
            func = &f4;
            break;
        case 5:
            func = &f5;
            break;
        case 6:
            func = &f6;
            break;
        case 7:
            func = &f7;
            break;
        default:
            cout << "Неверный выбор.\n";
            return 1;
    }

    // Получение значения x и вычисление функции в точке x
    cout << "Введите значение x: ";
    cin >> x;
    result = compute(func, x);

    // Вывод результата
    cout << "Результат: " << result << endl;

    return 0;
}

// Определение функций
double f1(double x) {
    return (1 / (1 + pow(x, 2)));
}

double f2(double x) {
    return acos(sqrt(x));
}

double f3(double x) {
    return log((1 + x) / (1 - x));
}

double f4(double x) {
    return exp(x - 1);
}

double f5(double x) {
    return (sin(sqrt(x)));
}

double f6(double x) {
    return atan(1/x);
}

double f7(double x) {
    return pow(log(x + 1/x), 2);
}

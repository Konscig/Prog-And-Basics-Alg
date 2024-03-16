#include <iostream>
using namespace std;

int main() {

    int first_int, second_int, middle_int = 0, result = 0;
    cout << "Введите два числа, которые хотите сложить: ";
    cin >> first_int >> second_int;

    result += first_int / 10 + second_int / 10;

    if (first_int / 100 != 0) {
        middle_int += (first_int / 100) * 10;
    } else {
        result += middle_int;
    }
    if (second_int / 100 != 0) {
        middle_int += (second_int / 100) * 10;
    } else {
        result += middle_int;
    }

    result += middle_int;

    if (first_int / 1000 != 0) {
        middle_int += (first_int / 1000) * 100;
    } else {
        result += middle_int;
    }
    if (second_int / 1000 != 0) {
        middle_int += (second_int / 1000) * 100;
    } else {
        result += middle_int;
    }

    result += middle_int;
    cout << result;
}
#include <iostream>
using namespace std;

int main() {
    int month = 0, year = 0;
    char leap_year = 0;
    cout << "Write down a month and year: ";
    cin >> month >> year;
    if ((year % 4 == 0) and (year % 100 == 0) and (year % 400 == 0)) {
        leap_year = 1;
    }
    switch (month) {
        case 1: cout << "31";
            break;
        case 2: if (leap_year) {
            cout << "28";
            break;
        } else {
            cout << "29";
            break;
        }
        case 3: cout << "31";
            break;
        case 4: cout << "30";
            break;
        case 5: cout << "31";
            break;
        case 6: cout << "30";
            break;
        case 7: cout << "31";
            break;
        case 8: cout << "31";
            break;
        case 9: cout << "30";
            break;
        case 10: cout << "31";
            break;
        case 11: cout << "30";
            break;
        case 12: cout << "31";
            break;
        default: cout << "Has wrote the wrong month or year. ";
        }
}

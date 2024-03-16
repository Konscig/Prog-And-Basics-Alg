/*
 * Напишите программу, которая будет повторять слова за пользователем до тех пор,
 * пока тот не введет с клавиатуры ключевое слово "Стоп" с заглавной буквы.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string question;
    cout << "Напишите что-нибудь: ";
    while (question != "Стоп") {
        cin >> question;
        cout << question << " ";
    }
}
*/

/*
    1) for (int i; i < ...; i++) {
    2) for (;;) {
    3) for (i in range(...)):
    4) for int i {
    
    int a = 0;
    while (a < 10) {
        a++;
        if (3 < a < 7) {
        }   std::cout << a;
    }
*/
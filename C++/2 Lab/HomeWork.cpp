/*
#include <iostream>
using namespace std;

int main(){
    int a = 0, sum = 0;
    cout << "Вводите числа: ";
    while (sum <= 256) {
        cin >> a;
        if (a*a % 3 == 0){
            sum += a;
        } else {
            cout << "Число не удовлетворяет условию.";
        }
    }
    cout << sum;
    return 0;
}
*/

#include <iostream>
using namespace std;
int main(){
    int n = 0, s = 0;
    n = 1200;
    while (n != 12) {
        n %= 4;
        n += 10;
        s += 1;
    }
    cout << s;
}
#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cout << "Write down a number length of 3: ";
    cin >> num;
    if (num / 100 + num % 10 == num % 100 / 10 * 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

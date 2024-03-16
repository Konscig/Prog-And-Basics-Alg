#include <iostream>
using namespace std;


int main() {
    int n, k = 0;
    cout << "Сколько чисел в массиве? " << endl;
    cin >> n;
    int a[n];
    cout << "Вводите последовательно числа в массив: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cout << a[i] << " ";
    }
    for (int i = 0; i < n - 1; i++) {
        if ((a[i] > 0) and (a[i + 1] > 0)) {
            ++k;
            if (k >= 1) {
                cout << "YES";
                break;
            }
        } else if ((a[i] > 0) and (a[i + 1] < 0)) {
            k = 0;
        }
    }
    if (k == 0) {
        cout << "NO";
    }
}
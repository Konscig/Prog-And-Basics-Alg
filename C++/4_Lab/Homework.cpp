#include <iostream>
using namespace std;

int main(){
    int n, sum = 0, mul = 1;
    cout << "Количество элементов массива: " << endl;
    cin >> n;
    int a[n];
    cout << "Вводите элементы последовательно: " << endl;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < 3; ++i){
        cout << a[i] << " ";
        sum += a[i];
        mul *= a[i];
    }
    cout << endl << "Сумма элементов равна: " << sum
    << endl << "Произведение элеметов равно: " << mul
    << endl << "Среднее арифметическое равно: " << sum/3;
}
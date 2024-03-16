#include <iostream>
using namespace std;

void init(int* arr, int pwr){
    srand(time(nullptr));
    for (int i = 0; i < pwr; i++){
        arr[i] = rand() % 80 - 41;
    }
}

void find(int* arr, int pwr){
    int max_el = -1000;
    int* max_el_ptr = &max_el;
    bool flag = false;

    for (int* i = arr; i < arr + pwr; i++){
        if (*i % 2 == 0 and *i < 0){
            if (*i > *max_el_ptr){
                max_el_ptr = i;
            }
        }
    }
    if (*max_el_ptr == -1000){
        cout << flag << " - Элементы отсутствуют. " << endl;
    } else {
        flag = true;
        cout << flag << " - Элементы есть. " << endl << *max_el_ptr;
    }
}

void output(int* arr, int pwr){
    for (int i = 0; i < pwr; i++){
        cout.width(2);
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Введите колличество элементов массива: ";
    cin >> n;
    int* massive = new int [n];

    init(massive, n);
    output(massive, n);
    cout << endl;
    find(massive, n);
}
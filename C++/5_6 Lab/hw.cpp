#include <iostream>
using namespace std;

void squared(int* arr, int pwr){
    for (int i = 0; i < pwr; i++){
        arr[i] = i*i;
    }
}

void output(int* arr, int pwr){
    for (int i = 0; i < pwr; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int* massive = new int [n];
    squared(massive, n);
    output(massive, n);
}
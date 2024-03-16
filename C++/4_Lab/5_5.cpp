#include <iostream>

using namespace std;


int main(){
    int n, m = 1;
    cout << "Введите количество гостей";
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    while (m <= n){
        for (int i = 0; i < n; i++){
            if (a[i] == m){
                cout << i + 1 << ' ';
            }
        }
        m += 1;
    }
}
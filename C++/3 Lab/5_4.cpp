#include <iostream>

using namespace std;

int main(){
    int apelsin;
    cout << "Сколько долек апельсина? ";
    cin >> apelsin;
    cout << "А Б В" << endl;
    for (int a=1; a < apelsin; a++){
        for (int b=1; b < apelsin; b++){
            for (int c = 1; c < apelsin; c++){
                if (a + b + c == apelsin){
                    cout << a << ' ' << b << ' ' << c << endl;
                }
            }
        }
    }
}

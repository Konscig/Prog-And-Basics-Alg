#include <iostream>
using namespace std;

int main() {
    double cost, money;
    cin >> cost;
    if (cost >= 500){
        cost -= cost / 10;
    }
    if (cost != 0) {
        while (money != 0) {
            cin >> money;
            if (money >= 500) {
                money -= money / 10;
            }
            cost += money;
        }
    }
    cout << cost;
}
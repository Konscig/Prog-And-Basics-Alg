#include <iostream>

using namespace std;

int main() {
    int n = 0, count = 0;
    cout << "Write down an integer: ";
    cin >> n;

    while (n != 0) {
        count += n%10;
        n /= 10;
    }
    cout << count;
}

#include <iostream>
#include <cmath>
using namespace std;

double* doublue(){
    int a[5] = {2, 4, 6, 8, 10};
    int pr = a[0]*a[1]*a[2]*a[3]*a[4];
    double pr1 = pow(pr, 0.2);
    double* geo_ptr = &pr1;
    return geo_ptr;
}

int main() {
    double* geo_ptr = doublue();
    cout << *geo_ptr;
}
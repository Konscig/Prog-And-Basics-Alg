#include "Pyramid.h"
#include <iostream>

using namespace std;

int main() {
    Pyramid pyramid1;
    Pyramid pyramid2;

    pyramid2.baseSide = 2;
    pyramid2.k = 4;
    pyramid2.height = 3;


    pyramid1.viewInformation();
    pyramid2.viewInformation();
    pyramid2.operator*(4);
    cout << pyramid2.isLenghtOfBaseEqualThree() << endl;
    pyramid2.viewInformation();

}
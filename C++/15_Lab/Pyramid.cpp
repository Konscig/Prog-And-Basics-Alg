//
// Created by Константин Герасимов on 10.06.2023.
//

#include "Pyramid.h"
#include <iostream>
#include <cmath>

using namespace std;

Pyramid::Pyramid(){
    baseSide = 1;
    height = 1;
    volume = (1%3)*height*pow(baseSide, 2);
}

Pyramid::Pyramid(float b, float h, float v) {
    baseSide = b;
    height = h;
    volume = v;
}

void Pyramid::viewInformation() const {
    cout << "The pyramid with base's side equals: " << baseSide << "; " << endl
    << "height equals: " << height << "; " << endl
    << "volume equals: " << volume << ". " << endl;
}

double Pyramid::squareOfPyramid() {
    return (pow(baseSide, 2.0) * sqrt(3))/4;
}

bool Pyramid::isLenghtOfBaseEqualThree() {
    return (baseSide == 3);
}

Pyramid Pyramid::operator*(double k) {
    height *= k;
    return *this;
}

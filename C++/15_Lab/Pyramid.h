//
// Created by Константин Герасимов on 10.06.2023.
//

#ifndef INC_15_LAB_PYRAMID_H
#define INC_15_LAB_PYRAMID_H


class Pyramid {
public:
    double baseSide{};
    double height{};
    double volume{};
    double k;

    Pyramid();
    Pyramid(float b, float h, float v);

    void viewInformation() const;
    double squareOfPyramid();
    bool isLenghtOfBaseEqualThree();

    Pyramid operator*(double k);
};


#endif //INC_15_LAB_PYRAMID_H

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>

class Student {
public:
    std::string name;
    std::string place_of_birth;
    std::vector <int> grades = {0, 0, 0, 0, 0};

    [[maybe_unused]] void print_info();
    double mid_grade();
};

#endif //STUDENT_H
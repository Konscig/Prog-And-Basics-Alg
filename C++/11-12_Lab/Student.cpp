#include "Student.h"

[[maybe_unused]] void Student::print_info() {
    std::cout << "Name: " << name << "; City: " << place_of_birth  << "; Grades: ";
    for (int i = 0; i < 5; i++){
        if (i < 4){
            std::cout << grades[i] << ", ";
        } else {
            std::cout << grades[i] << ". " << std::endl;
        }
    }
}

double Student::mid_grade() {
    double sum = 0;
    double mid;
    for (int i = 0; i < 5; i++){
        sum = sum + grades[i];
    }
    mid = sum / 5;
    return mid;
}
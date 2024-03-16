#ifndef STUDENT_GROUP_H
#define STUDENT_GROUP_H

#include <iostream>
#include <vector>
#include "Student.h"

class Student_Group {
public:
    std::string group_name;
    std::vector <Student> list_of_students;

    void add_student(const Student& name_of_student);
    void print_info();
    void best_rating();
    void sort();
};

#endif //STUDENT_GROUP_H
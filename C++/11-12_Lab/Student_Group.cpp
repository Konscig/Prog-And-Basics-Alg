#include "Student_Group.h"

void Student_Group::add_student(const Student& name_of_student) {
    list_of_students.push_back(name_of_student);
}

void Student_Group::print_info() {
    std::cout << "Group: " << group_name << std::endl << "List of students: " << std::endl;
    for (auto & list_of_student : list_of_students){
        std::cout << list_of_student.name << std::endl;
    }
}

void Student_Group::best_rating() {
    int counter = 0;
    for (auto & student : list_of_students){
        if (student.mid_grade() >= 4.0){
            ++counter;
            std::cout << student.name << " mid range - " << student.mid_grade() << std::endl;
        }
    }
    if (!counter){
        std::cout << "Best list is empty! " << std::endl;
    }
}

void Student_Group::sort() {
    Student value;
    for (int i = 0; i < list_of_students.size()-1; i++){
        if (list_of_students[i].place_of_birth[0] > list_of_students[i+1].place_of_birth[0]){
            value = list_of_students[i];
            list_of_students[i] = list_of_students[i+1];
            list_of_students[i+1] = value;
        }
    }
}
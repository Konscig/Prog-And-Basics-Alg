#include <iostream>

#include "Student.h"
#include "Student_Group.h"

int main(){
    Student_Group group1;
    group1.group_name = "MOiAIS";
    while (true){
        int answer;
        std::cout << "Write, what you want to do: " << std::endl
        << "1. Add a student;" << std::endl
        << "2. View a rating" << std::endl
        << "3. Sort list of students." << std::endl;
        std::cin >> answer;
        switch (answer) {
            case 1:{
                std::string nameOfStudent, placeOfStudent;
                int studentsGrades[5] = {0, 0, 0, 0, 0};
                std::cout << "How's name of student? (ex. Johns_B.)" << std::endl;
                std::cin >> nameOfStudent;
                std::cout << "Where he was born? (name of city, ex. Houston)" << std::endl;
                std::cin >> placeOfStudent;
                std::cout << "Write down his 5 grades in string (ex. 1 2 3 4 5): " << std::endl;
                for (int & studentsGrade : studentsGrades){
                    std::cin >> studentsGrade;
                }
                Student student;
                student.name = nameOfStudent;
                student.place_of_birth = placeOfStudent;
                for (int i = 0; i < student.grades.size(); i++){
                    student.grades[i] = studentsGrades[i];
                }

                group1.add_student(student);
                std::cout << "Student was successfully added!" << std::endl;
                student.print_info();
                break;
            }
            case 2:{
                group1.best_rating();
                break;
            }
            case 3:{
                group1.sort();
                break;
            }
            default:{
                break;
            }
        }
    }
}
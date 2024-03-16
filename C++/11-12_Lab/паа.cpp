Student student1;
Student student2;
Student student3;
Student_Group group_1;

student3.name = "Cray G.";
student3.place_of_birth = "Boston";
student3.grades = {3, 3, 3, 2, 1};

student1.name = "Johns F.";
student1.place_of_birth = "Boston";
student1.grades = {5, 5, 5, 5, 5};

student2.name = "Samson I.";
student2.place_of_birth = "Houston";
student2.grades = {4, 4, 4, 4, 4};

group_1.add_student(student1);
group_1.add_student(student2);
group_1.add_student(student3);

group_1.print_info();
std::cout << std::endl;
group_1.sort();
std::cout << std::endl;
group_1.print_info();

#include <iostream>
#include <string>
using namespace std;

struct student {
        string name;
        char grade;
        int age;
    };

void output(const student& var) {
    cout << "student name " << var.name << endl;
    cout << "student age " << var.age << endl;
    cout << "student grade " << var.grade << endl;
    cout << endl;
}

int main() {
    student student1;
    student student2;

    student1.name = "charlie";
    student1.grade = 'B';
    student1.age = 14;

    student2.name = "max";
    student2.grade = 'C';
    student2.age = 17;

    student student3 = {"david", 'E', 12};

    output(student1); output(student2); output(student3);
    return 0;
}
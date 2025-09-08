
#include <iostream>
#include <string>
using namespace std;

struct person {
    string fname;
    string lname;
    int age;
    double height;
};

void outputPerson(const person& structure) {
    cout << structure.fname << " ";
    cout << structure.lname << " ";
    cout << structure.age << " ";
    cout << structure.height << endl;
}

main() {
    person traelyn = {"traelyn", "stone", 16, 5.7};
    outputPerson(traelyn);
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class person {
    private:
        string name;
        int age;

    public:
        person(string a, int b) {
            name = a;
            age = b;
        }

        friend void getinfo(person persons_info);
};

void getinfo(person persons_info) {
    cout << "name: " << persons_info.name << " age: " << persons_info.age << endl; 
}

int main() {
    person james("james", 24);
    getinfo(james);
    return 0;
}
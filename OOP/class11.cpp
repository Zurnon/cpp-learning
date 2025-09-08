
#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void speak() {
            cout << "Animal speaks" << endl;
        }
};

class Dog : public Animal {
    public:
        void speak() override {
            cout << "Dog barks" << endl;
        }
};

int main() {
    Dog mydog;
    Animal myanimal;

    myanimal.speak(); // Outputs: Animal speaks
    mydog.speak();    // Outputs: Dog barks

    return 0;
}
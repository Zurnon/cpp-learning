
#include <iostream>
#include <string>
using namespace std;

class car {
    public:
        car() {
            cout << "car brand is unknown" << endl;
            cout << "car year is unknown" << endl;
        }

        car(string brand, int year) {
            cout << "car brand is " << brand << endl;
            cout << "car year is " << year << endl;
        }
};

int main() {
    car mycar;
    car mycoolcar("bmw", 2022);
    return 0;
}
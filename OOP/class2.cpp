
#include <iostream>
#include <string>
using namespace std;

class dog {
    public:
        void bark(int amount) {
            for (int i = 0; i < amount; i++) {
                cout << "woof" << endl;
            }
    }
};

int main() {
    dog max;
    max.bark(4);
    return 0;
}
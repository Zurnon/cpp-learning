
#include <iostream>
#include <string>
using namespace std;

template <typename _Type>
class show {
    public:
        show(_Type value) {
            cout << value << endl;
        }
};

int main() {

    show<int> obj1(5);
    show<double> obj2(5.5);
    show<string> obj3("5");

    return 0;
}
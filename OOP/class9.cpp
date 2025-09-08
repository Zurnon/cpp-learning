
#include <iostream>
#include <string>
using namespace std;

template <typename _Type>
class add {
    public:
        add(_Type a, _Type b) {
            val = a + b;
        }

        void show() {
            cout << val << endl;
        }
};

int main() {
    add<int> obj1(1, 4);
    add<string> obj2("hello ", "world");

    obj1.show();
    obj2.show();

    return 0;
}
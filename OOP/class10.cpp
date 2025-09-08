
#include <iostream>
#include <string>
using namespace std;

template <typename Type>
class myClass {
    public:
        myClass(Type var1, Type var2) {
            Type var3 = var1 + var2;
            cout << var3 << endl;
        }
};

int main() {
    myClass<string> obj("hello ", "world");
    myClass<int> obj2(1, 4);
    return 0;
}
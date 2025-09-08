
#include <iostream>
#include <string>
using namespace std;

template <typename Type>
class Add {
    public:
        Type _2(Type a, Type b) {return a + b;}
        Type _3(Type a, Type b, Type c) {return a + b + c;}
        Type _4(Type a, Type b, Type c, Type d) {return a + b + c + d;}
        Type _5(Type a, Type b, Type c, Type d, Type e) {return a + b + c + d + e;}
};

template <typename Type>
class Subtract {
    public:
        Type _2(Type a, Type b) {return a - b;}
        Type _3(Type a, Type b, Type c) {return a - b - c;}
        Type _4(Type a, Type b, Type c, Type d) {return a - b - c - d;}
        Type _5(Type a, Type b, Type c, Type d, Type e) {return a - b - c - d - e;}
};

template <typename Type>
class math {
    public:
        Add<Type> add;
        Subtract<Type> subtract;
};

int main() {
    
    math<int> mathobj;
    cout << mathobj.add._2(1, 2) << endl;
    cout << mathobj.subtract._3(1, 2, 3) << endl;

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

class myClass {
    public:
        int myNum;
        string myString;
};

int main() {
    myClass obj;

    obj.myNum = 5;
    obj.myString = "hello world";

    cout << obj.myNum << endl;
    cout << obj.myString << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string myName = "bob";
    string* pointer = &myName;
    cout << *pointer << " address is " << pointer << endl;

    *pointer = "traelyn";
    cout << *pointer << " address is " << pointer << endl;
    return 0;
}
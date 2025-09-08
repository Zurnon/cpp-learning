
#include <iostream>
#include <string>
using namespace std;


int main() {
    string myName = "bob";
    string &ref = myName;

    ref = "traelyn";

    cout << myName << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

template <typename type>
type add(type a, type b) {
    return a + b;
}

int main() {
    cout << add<int>(1, 2) << endl;
    cout << add<double>(1.1, 2.2) << endl;
    return 0;
}
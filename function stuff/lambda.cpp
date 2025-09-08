
#include <iostream>
#include <string>
using namespace std;

int main() {

    auto add = [](int x, int y) {return x + y;};

    cout << add(3, 5) << endl;
    return 0;
}
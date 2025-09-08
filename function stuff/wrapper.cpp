
#include <iostream>
#include <string>
#include <functional>
using namespace std;

void wrap(function<void()> func) {
    cout << "on" << endl;
    func();
    cout << "off" << endl;
}

int main() {
    int x = 3, y = 5;
    wrap([x, y]() {
        int result = x + y;
        cout << result << endl;
    });
    return 0;
}

#include <iostream>

void myFunc() {
    std::cout << "yo wsp" << std::endl;
}

int main() {
    void (*pointer)() = &myFunc;
    
    myFunc();
    pointer();

    return 0;
}
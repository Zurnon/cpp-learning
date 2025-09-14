
#include <iostream>

void myFunc() {
    std::cout << "yo wsp my nigga" << std::endl;
}

void myOtherFunc() {
    std::cout << "bye bye" << std::endl;
}

int main() {
    void (*myFuncRef)() = &myFunc;
    myFuncRef();

    myFuncRef = &myOtherFunc;
    myFuncRef();

    return 0;
}
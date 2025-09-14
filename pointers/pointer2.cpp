
#include <iostream>

int main() {
    int myVar = 5;
    int* myVarPointer = &myVar;

    std::cout << *myVarPointer << std::endl;

}
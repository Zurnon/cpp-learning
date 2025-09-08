
#include <iostream>

int main() {

    int* x = new int;
    *x = 10;
    delete x;

    double* y = new double;
    *y = 11.19;
    delete y;

        return 0;
}
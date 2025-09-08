
#include <iostream>
#include <string>
using namespace std;

struct {
    int year = 2020;
    string name = "voltswagen";
    double top_speed = 120.6;
} car;

int main() {
    cout << car.year << endl;
    cout << car.name << endl;
    cout << car.top_speed << endl;
    return 0;
}
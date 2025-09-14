
#include <iostream>
#include <vector>
using namespace std;

template <typename Type>
    struct MyVector {
        vector<Type> vec;
    };

int main() {
    MyVector<int> myVec;
    for (int i = 0; i < 5; i++) {
        myVec.vec.push_back(i * 10);
    }
    for (int j = 0; j < myVec.vec.size(); j++) {
        cout << j << ": "<< myVec.vec[j] << endl;
    }
    return 0;
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int num_guests;
    cin >> num_guests;
    cin.ignore();
    if (num_guests <= 0) {
        cout << "number of guests must be atleast 1" << endl;
        return 0;
    }

    string* guests = new string[num_guests];
    
    for (int i = 0; i < num_guests; i++) {
        cout << "whats guests number " << i++ << "\'s name" << endl;
        getline(cin, guests[i]);
    }

    for (int i = 0; i < num_guests; i++) {
            cout << guests[i] << endl;
    }

    delete[] guests;
    return 0;
}
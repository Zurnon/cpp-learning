
#include <iostream>
#include <string>
using namespace std;

int user_input;

int main() {
    while (true) {
        cout << "type a number" << endl;
        cin >> user_input;
        try {
            if (cin.fail()) {
                throw user_input;
            } else {
                cout << "your number is " << user_input << " and its a valid number" << endl;
                break;
            }
        } catch (int mynum) {
            cout << mynum << " is not a valid number try again" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
    }
    return 0;
}
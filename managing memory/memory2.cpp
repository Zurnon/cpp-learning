
#include <iostream>
using namespace std;

main() {
    int guest_count;
     
    while (true) {
        cout << "enter the amount of guests attending" << endl;
        cin >> guest_count;
        try {
            if (cin.fail()) {
                throw guest_count;
            } else {
                break;
            }
        } catch(...) {
            cout << "enter a valid amount of guests\n " << guest_count << "is not valid" << endl;
        }        
    }

    string *guests = new string[guest_count];
    
    for (int i = 0; i < guest_count; i++) {
        cout << "enter guest number " << i << "s name" << endl;
        getline(cin, guests[i]);
    }

    for (int i = 0; i < sizeof(guests) / sizeof(guests[0]); i++)
        cout << "guest number " << i << "is " << guests[i] << endl;

    delete guests;
}
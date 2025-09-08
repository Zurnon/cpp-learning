
#include <iostream>
#include <string>
using namespace std;

class dad {
    public:
        string fname = "mike";
        string lname = "jones";

        void sayNames(string fname, string lname) {
            cout << "fname: " << fname << endl;
            cout << "lname: " << lname << endl;
        }
};

class child: public dad {
    public:
        string fname = "bob";
};

int main() {
    dad mydad;
    child myson;

    myson.sayNames(myson.fname, myson.lname);

    return 0;
}
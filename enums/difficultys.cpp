
#include <iostream>
using namespace std;

enum difficultys {
        easy = 0,
        medium = 1,
        hard = 2,
        extreme = 3
    };

void output(difficultys level) {
    switch(level) {
        case easy :
            cout << "your on easy mode have fun" << endl;
            break;
        case medium :
            cout << "your on medium mode" << endl;
            break;
        case hard :
            cout << "your on hard mode good luck with the challenge" << endl;
            break;
        case extreme :
            cout << "your on extreme mode ill pray for you" << endl;
            break;
    }
}

int main() {
    enum difficultys level1 = easy;
    enum difficultys level2 = extreme;
    output(level1);

    return 0;
}
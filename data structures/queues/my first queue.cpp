
#include <queue>
#include <string>
#include <iostream>

namespace Line {
    template <typename __type>
        class lineUp {
            private:
                std::queue<__type> theLine;
                std::string lineName;
            public:
                lineUp(std::string name) : lineName(name) {
                    std::cout << "created line: " << lineName << std::endl;
                }

                void add(__type newMember) {
                    theLine.push(newMember);
                    std::cout << "added " << newMember << std::endl;
                }

                void _continue() {
                    if (!theLine.empty()) {
                        std::cout << "removing:" << theLine.front() << std::endl;
                        theLine.pop();
                    } else {
                        std::cout << "line is empty. nobody to remvove" << std::endl;
                    }
                }

                void showLine() {
                    std::cout << "line name: " << lineName << std::endl;
                    std::cout << "line size: " << theLine.size() << std::endl;
                }
        };
}

int main() {
    
    Line::lineUp<int> myline("line");

    for (int i = 0; i < 3; i++) {
        myline.add(i);
    }

    myline._continue();
    myline.showLine();

    return 0;
}
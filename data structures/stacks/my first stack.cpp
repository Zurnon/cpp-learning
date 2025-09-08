
#include <stack>
#include <iostream>
#include <string>

namespace Stack {
    template <typename __type>
        class myStack {
            private:
                std::stack<__type> stack;
                std::string stackName;
            public:
                myStack(std::string name)
                    : stackName(name) {
                        std::cout << "created stack: " << stackName << std::endl;
                }

                void add(__type newMember) {
                    stack.push(newMember);
                    std::cout << "added: " << newMember << "to " << stackName << std::endl;
                }

                void remove() {
                    if (!stack.empty()) {
                        std::cout << "removed " << stack.top() << "from " << stackName << std::endl;
                        stack.pop();
                    } else {
                        std::cout << stackName << " is empty nothing to remove" << std::endl;
                    }
                }

                void list() {
                    std::stack<__type>fake = stack;
                    std::cout << "stack " << stackName << ":\n" << std::endl;

                    while (!fake.empty()) {
                        std::cout << fake.top();
                        fake.pop();
                    }
                    std::cout << std::endl;
                }

        };
}

int main() {
    Stack::myStack<int> stack1("stack");

    for (int i = 0; i < 5; i++) {
        stack1.add(i);
    }

    stack1.list();
    stack1.remove();
    stack1.list();

    return 0;
}

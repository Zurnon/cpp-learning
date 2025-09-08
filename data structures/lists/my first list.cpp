
#include <list>
#include <string>
#include <iostream>

namespace lms {
    template <typename __type>
        class myList {
            private:
                std::list<__type> values;
                std::string listName;
            public:
                myList(const std::string& name) : listName(name) {
                    std::cout << "created list: " << name << std::endl;
                }

                void addFront(const __type& element) {
                    values.push_front(element);
                }

                void addBack(const __type& element) {
                    values.push_back(element);
                }

                void removeBack() {
                    if (!values.empty()) {
                        values.pop_back();
                    } else {
                        std::cout << "no value to remove" << std::endl;
                    }
                }

                void removeFront() {
                    if (!values.empty()) {
                        values.pop_front();
                    } else {
                        std::cout << "no value to remove" << std::endl;
                    }
                }

                size_t size() const {
                    return values.size();
                }

                void output() const {
                    for (const __type& value : values) {
                        std::cout << "- " << value << std::endl;
                    }
                }

                void clear() {
                    while (!values.empty()) {
                        values.pop_front();
                    }
                }
        };
}

int main() {
    lms::myList<int> list1("mylist");

    for (int i = 0; i < 5; i++) {
        list1.addFront(i);
    }

    for (int i = 5; i > 0; i--) {
        list1.addBack(i);
    }
    list1.output();
    std::cout << "size: " << list1.size() << std::endl;

    list1.removeBack();
    list1.removeFront();

    list1.output();
    std::cout << "size: " << list1.size() << std::endl;

    list1.clear();
    std::cout << "size: " << list1.size() << std::endl;
    return 0;
}


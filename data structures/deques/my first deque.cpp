
#include <deque>
#include <iostream>

int main() {
    std::deque<int> mydeque = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    mydeque.push_back(0);
    mydeque.push_front(10);

    std::cout << mydeque[2] << std::endl;
    std::cout << mydeque.front() << std::endl;
    std::cout << mydeque.back() << std::endl;
    std::cout << mydeque.at(1) << std::endl;
    std::cout << mydeque.size() << std::endl;
    std::cout << mydeque.empty() << std::endl;

    return 0;
}
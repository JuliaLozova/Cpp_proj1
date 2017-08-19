#include <iostream>
#include "list.h"


int main(int argc, char** argv) {
    std::cout << "List test\n";

    List list;
    Node* five = list.push_back(5);
    list.insert_after(five, 6);
    Node* two = list.push_front(2);
    list.push_front(1);
    list.insert_after(two, 3);

    Node* three = list.find(3);
    list.insert_after(three, 4);

    list.erase(five);

    // The output of this line should be
    // 1
    std::cout << list.front()->getValue();

    // The output of this line should be
    // 4
    std::cout << list.back()->getValue();

    // The output of this line should be
    // {1, 2, 3, 4}
    std::cout << list.toString();
    return 0;
}
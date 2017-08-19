#include <list>
#include <string>

class Node {
public:
    Node(int value) : value_(value) {}
    int getValue() {return value_;}
private:
    int value_;
};

class List {
public:
    List();
    ~List();

    // Get the first element
    Node* front();

    // Get the last element
    Node* back();

    // Is the list empty?
    bool empty();

    // Return the size
    int size();

    // Clear everything
    void clear();

    // Remove the element at the given position
    void erase(Node* elm);

    // Insert the element at the given position
    void insert_after(Node* elm, int value);

    // Add the element to the end and return its node
    Node* push_back(int value);

    // Add the element to the beginning and return its node
    Node* push_front(int value);

    // Find the first occurance of the value in the list
    Node* find(int value);

    std::string toString() const;

private:

};
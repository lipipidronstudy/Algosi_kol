#include <iostream>

struct Node {
    int data;
    Node *next;
};

struct myList {
    Node* head;
    Node* tail;

    myList() {
        head = tail = nullptr;
    }
};

using namespace std;

int main() {

    return 0;
}

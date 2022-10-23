#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node *prev;
};

struct myList {
    Node *head;
    Node *tail;

    myList() {
        head = tail = nullptr;
    }

    int isEmpty(){
        if (head == nullptr && tail == nullptr){
            return 1;
        }
        return 0;
    }

    void headDel(){
     Node* tmp = head;
     if(isEmpty() == 1){
         cout << "List is Empty";
         return;
     }
     delete(tmp);

    }

    void tailDel(){
        Node* tmp = tail;
        if(isEmpty() == 1){
            cout << "List is Empty";
            return;
        }
        delete(tmp);
    }

};



int main() {

    return 0;
}


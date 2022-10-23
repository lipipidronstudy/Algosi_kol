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
    void addToHead(int x) {
        Node* tmp = new Node;
        tmp -> data = x;

        tmp -> next = head;
        tmp -> prev = nullptr;
        if (isEmpty() != 1) {
            head->prev = tmp;
        } else {
            tail = tmp;
        }
        head = tmp;
    }

    void addToTail(int x) {
        Node* tmp = new Node;
        tmp -> data = x;
        tmp -> prev = tail;
        tmp -> next = nullptr;

        if (isEmpty() != 0){
            head = tmp;
        } else {
            tail -> next = tmp;
        }
        tail = tmp;
    }




    void headDel(){
        Node* tmp = head;
        if(isEmpty() == 1){
            cout << "List is Empty";
            return;
        }
        cout << tmp -> data;
        delete(tmp);

    }

    void tailDel(){
        Node* tmp = tail;
        if(isEmpty() == 1){
            cout << "List is Empty";
            return;
        }
        cout << tmp -> data;
        delete(tmp);
    }

};




int main() {
    myList test;
    
    return 0;
}



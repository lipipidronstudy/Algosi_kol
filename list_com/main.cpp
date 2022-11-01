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

    int isEmpty() {
        if (head == nullptr && tail == nullptr) {
            return 1;
        }
        return 0;
    }

    void addToHead(int x) {
        Node *tmp = new Node;
        tmp->data = x;

        tmp->next = head;
        tmp->prev = nullptr;
        if (isEmpty() != 1) {
            head->prev = tmp;
        } else {
            tail = tmp;
        }
        head = tmp;
    }

    void addToTail(int x) {
        Node *tmp = new Node;
        tmp->data = x;
        tmp->prev = tail;
        tmp->next = nullptr;

        if (isEmpty() != 0) {
            head = tmp;
        } else {
            tail->next = tmp;
        }
        tail = tmp;
    }


    void headDel() {
        Node *tmp = head;
        if (isEmpty() == 1) {
            cout << "List is Empty" << '\n';
            return;
        }
        head = head->next;
        delete (tmp);

    }

    void tailDel() {
        Node *tmp = tail;
        if (isEmpty() == 1) {
            cout << "List is Empty";
            return;
        }

        tail = tail->prev;
        delete (tmp);
    }

    int peekTail() {
        if (isEmpty() != 1) {
            return tail->data;
        }
        cout << "List is Empty" << '\n';
        return -1;
    }

    int peekHead() {
        if (isEmpty() != 1) {
            return head->data;
        }
        cout << "List is Empty" << '\n';
        return -1;
    }

    void printHead() {
        if (isEmpty() == 1) {
            return;
        }
        Node *tmp = head;
        while (tmp != nullptr) {
            cout << tmp->data << ' ';
            tmp = tmp -> next;
        }

        cout << '\n';
    }

    void printTail() {
        if (isEmpty() == 1) {
            return;
        }
        Node *tmp = tail;
        while (tmp != nullptr) {
            cout << tmp->data << ' ';
            tmp = tmp -> prev;
        }
        cout << '\n';
    }
};


int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    myList test;
    test.addToTail(1);
    test.addToTail(2);
    test.addToTail(3);
    test.printHead();
    test.printTail();
    return 0;
}



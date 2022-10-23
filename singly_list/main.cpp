#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *next;
};

struct List {
    Node *first;
    Node *last;

    List() {
        first = nullptr;
        last = nullptr;
    }

    bool empty() {
        return first == nullptr;
    }

    void push_back(int x) {
        Node* temp = new Node;
        temp -> value = x;
        temp -> next = nullptr;
        if (empty()) {
            first = temp;
            last = temp;
        }
        else {
            last -> next = temp;
            last = temp;
        }
    }

    void push_front(int x) {
        Node* temp = new Node;
        temp -> value = x;
        if (empty()) {
            temp -> next = nullptr;
            first = temp;
            last = temp;
        }
        else {
            temp -> next = first;
            first = temp;
        }
    }

    void delete_first() {
        if (empty()) {
            return;
        }
        Node* temp = first;
        first = temp -> next;
        delete temp;
    }

    void delete_last(){
        if (empty()){
            return;
        }
        Node* temp = first;
        while (temp -> next != last) {
            temp = temp -> next;
        }
        temp -> next = nullptr;
        delete last;
        last = temp;
    }

    int peek_first() {
        if (empty()) {
            return -1;
        }
        return first -> value;
    }

    int peek_last() {
        if (empty()) {
            return -1;
        }
        return last -> value;
    }

    void print() {
        if (empty()) {
            return;
        }
        Node* temp = first;
        while (temp) {
            cout << temp -> value << " ";
            temp = temp -> next;
        }
        cout << endl;
    }

};

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    List newList;

    return 0;
}

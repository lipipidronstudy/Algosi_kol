#include <iostream>

using namespace std;
struct Node {
    int data;
    Node *next;
};

struct singleList {
    Node *head;
    Node *tail;

    singleList() {
        head = tail = nullptr;
    }

    int isEmpty() {
        if (head == tail && head == nullptr) {
            return 1;
        }
        return 0;
    }

    void addHead(int x) {
        Node *tmp = new Node;
        int flag = isEmpty();
        tmp->data = x;
        tmp->next = head;
        if (flag == 1) {
            tail = tmp;
        }
        head = tmp;
        tail -> next = head;
    }

    void addTail(int x) {
        Node *tmp = new Node;
        int flag = isEmpty();
        tmp->data = x;
        tail->next = tmp;
        if (flag == 1) {
            head = tmp;
        }
        tail = tmp;
        tail -> next = head;
    }

    void delHead() {
        if (isEmpty() == 0) {
            Node *tmp = head;
            head = tmp->next;
            delete (tmp);
            tail -> next = head;
        }
    }

    void delTail() {
        if (isEmpty() == 0) {
            Node* tmp = head;
            while (tmp -> next != tail){
                tmp = tmp ->next;
            }
            Node* del = tail;
            tail = tmp;
            delete (del);
            tail -> next = head;
        }
    }

    int peekHead() {
        if (isEmpty() == 1) {
            return INT_MAX;
        }
        return head->data;
    }

    int peekTail() {
        if (isEmpty() == 1) {
            return INT_MAX;
        }
        return tail->data;
    }

    void printHead() {
        if (isEmpty() == 1) {
            return;
        }
        Node *tmp = head;
        int flag = 0;
        while (flag == 0) {
            cout << tmp->data << ' ';
            tmp = tmp->next;
            if (tmp == head){
                flag = 1;
            }
        }
        cout << '\n';
    }

    void printTail() {
        if (isEmpty() == 1) {
            return;
        }
        Node *tmp = head;
        int count = 0;
        int flag = 0;
        while (flag == 0) {
            count++;
            tmp = tmp->next;
            if (tmp == head){
                flag = 1;
            }
        }
        int array[count];
        count = 0;
        tmp = head;
        flag = 0;
        while (flag == 0) {
            array[count++] = tmp->data;
            tmp = tmp->next;
            if (tmp == head){
                flag = 1;
            }
        }
        for (int i = count - 1; i >= 0; --i) {
            cout << array[i] << ' ';
        }
        cout << '\n';
    }
};

int main() {
    singleList test;
    test.addHead(1);
    test.addHead(2);
  //  cout << test.peekHead() << ' ' << test.peekTail() << ' ';
   // test.delTail();
    test.printTail();
    return 0;
}


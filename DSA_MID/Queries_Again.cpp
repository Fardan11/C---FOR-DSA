#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;
    // Constructor w initialize
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insertAt(int index, int value) {
        Node* newNode = new Node(value);
        if (index < 0) {
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }

        if (index == 0) {
            if (!head) {
                head = newNode;
                tail = newNode;
            } else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        } else {
            Node* tmp = head;
            for (int i = 0; i < index - 1; ++i) {
                if (!tmp) {
                    cout << "Invalid" << endl;
                    delete newNode;
                    return;
                }
                tmp = tmp->next;
            }

            if (!tmp) {
                cout << "Invalid" << endl;
                delete newNode;
                return;
            }

            newNode->next = tmp->next;
            newNode->prev = tmp;

            if (tmp->next) {
                tmp->next->prev = newNode;
            } else {
                tail = newNode;
            }
            tmp->next = newNode;
        }

        printList();
    }

    void printList() {
        cout << "L -> ";
        Node* tmp = head;
        while (tmp) {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;

        cout << "R -> ";
        tmp = tail;
        while (tmp) {
            cout << tmp->data << " ";
            tmp = tmp->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    int Q;
    cin >> Q;
    while (Q--) {
        int X, V;
        cin >> X >> V;
        dll.insertAt(X, V);
    }
    return 0;
}

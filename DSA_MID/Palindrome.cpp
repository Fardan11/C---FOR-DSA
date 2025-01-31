#include <iostream>
#include <list>
#include <set>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
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

    void append(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }


   bool isPalindrome() {
        if (head == NULL) 
        //c case
        return true;

        Node* left = head; // begin
        Node* right = tail; //end

        //continue until middle match
        while (left != right && left->prev != right) {
            if (left->data != right->data) {
                return false;
            }
            left = left->next;
            right = right->prev;
        }
        return true;
    }
};
    
int main()
{
    DoublyLinkedList DL;
    int value;
    while (cin >> value) {
        if (value == -1) {
            break;
        }
        DL.append(value);
    }

    if (DL.isPalindrome()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }



    return 0;
}


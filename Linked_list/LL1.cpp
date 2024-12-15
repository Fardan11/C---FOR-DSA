#include <bits/stdc++.h>
using namespace std;

class Node

{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()

// We keep the address of the node

{

    Node a(10), b(30), c(50);

    a.data = 20;
    b.data = 30;
    c.data = 50;

    a.next = &b;
    b.next = &c;
    // c.next = NULL;

    cout << a.data << " " << b.data << " " << c.data;

    return 0;
}
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

{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(40);
    head->next = a;
    a->next = b;

    cout << head->data << endl;

    return 0;
}
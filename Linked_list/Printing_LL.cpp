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
    Node *a = new Node(30);
    Node *b = new Node(100);
    Node *c = new Node(90);

    head->next = a;
    a->next = b;
    c->next = c;
    Node *temp = head;

    // cout << head->next->data << endl;
    while (temp != NULL) // remember this always
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}
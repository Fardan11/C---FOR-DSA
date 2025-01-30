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
    int v;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (cin >> v && v != -1)
    {
        Node *newNode = new Node(v);
        if (head1 == NULL)
        {
            head1 = newNode;
            tail1 = newNode;
        }
        else
        {
            tail1->next = newNode;
            tail1 = newNode;
        }
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (cin >> v && v != -1)
    {
        Node *newNode = new Node(v);
        if (head2 == NULL)
        {
            head2 = newNode;
            tail2 = newNode;
        }
        else
        {
            tail2->next = newNode;
            tail2 = newNode;
        }
    }

    Node *temp1 = head1;
    Node *temp2 = head2;
    bool Equal = true;

    // comparing data

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            Equal = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    // compare the  nodes
    if (temp1 != NULL || temp2 != NULL)
    {
        Equal = false;
    }

    if (Equal)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

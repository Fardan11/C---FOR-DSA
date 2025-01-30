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
    Node *head = NULL;
    Node *tail = NULL;

    while (cin >> v && v != -1)
    {
        Node *newNode = new Node(v);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Remove dup
    Node *temp = head;
    while (temp != NULL)
    {
        Node *cur = temp;
        while (cur->next != NULL)
        {
            // cur->next->data
            if (cur->next->data == temp->data)
            {
                Node *dup = cur->next;
                cur->next = cur->next->next;
                delete dup;
            }
            else
            {
                cur = cur->next;
            }
        }
        temp = temp->next;
    }

    Node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << ' ';
        cur = cur->next;
    }
    cout << endl;

    return 0;
}

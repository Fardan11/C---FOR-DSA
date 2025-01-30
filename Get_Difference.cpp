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
    int val;
    Node *head = NULL;
    Node *tail = NULL;

    while (cin >> val && val != -1)
    {
        Node *newNode = new Node(val);
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

    int maxVal = head->data;
    int minVal = head->data;

    // Traversing
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data > maxVal)
        {
            maxVal = temp->data;
        }
        if (temp->data < minVal)
        {
            minVal = temp->data;
        }
        temp = temp->next;
    }

    cout << (maxVal - minVal) << endl;

    return 0;
}

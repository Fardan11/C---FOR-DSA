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
    int T;
    cin >> T;
    while (T--)
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

        int X;
        cin >> X;
        Node *temp = head;

        //start from 0 -1 default
        int index = 0;
        int foundIndex = -1; 

        while (temp != NULL)
        {
            if (temp->data == X)
            {
                foundIndex = index;
                break;
            }
            temp = temp->next;
            index++;
        }

        cout << foundIndex << endl;

    }

    return 0;
}

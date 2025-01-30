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
    int Q; //query
    cin >> Q;
    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < Q; i++) //3
    {
        int X, v;
        cin >> X >> v;

        // 0 hoile head, 1 tail, nth index

        if (X == 0)
        {
            // head
            Node *newNode = new Node(v);
            newNode->next = head;
            head = newNode;
        }
        else if (X == 1)
        {
            // Insert at tail
            Node *newNode = new Node(v);
            if (head == NULL)
            {
                head = newNode;
            }
            else
            {
                Node *temp = head;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
        else if (X == 2)
        {
            // Delete nth index if 2
            if (v == 0) // corner
            {
                if (head != NULL)
                {
                    Node *temp = head;
                    head = head->next;
                    delete temp;
                }
            }
            else
            {
                Node *temp = head;
                for (int j = 0; temp != NULL && j < v - 1; j++)
                {
                    temp = temp->next;
                }
                if (temp != NULL && temp->next != NULL)
                {
                    Node *deleted = temp->next;
                    temp->next = temp->next->next;
                    delete deleted;
                }
            }
        }
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    return 0;
}

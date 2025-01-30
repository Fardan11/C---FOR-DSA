#include<bits/stdc++.h>
using namespace std;

class Node
{
Public:
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

void print_forward()

int main()    
{
  Node* head =new Node(10);
  Node* a=new Node(20);
  Node* tail=new Node(30);

  head->next=a;
  a->prev=head;

  a->next=tail;
  tail->prev=a;
    
    
  return 0;
    
}
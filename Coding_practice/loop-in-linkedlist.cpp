/*Loop in the linkedlist
*/


#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
    }
};

class Linkedlist 
{
  
   public:
    Node *head = NULL;
   void push(int data);
   void print();
   int detectLoop(Node *list);
};

void Linkedlist::push(int data)
{
    // Allocate a node
    Node *temp = new Node(data);
    temp->next = head;
    head  = temp;

}

void Linkedlist::print()
{
    Node *temp = head;
    while(temp!= NULL)
    {
        cout<< "Inside Print Function : "<< temp->data<<endl;
        temp = temp->next;
    }
}

// Detect the node of the linkedlist

int Linkedlist::detectLoop(Node *node)
{

    Node *slow = node, *fast = node;

    while(slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{

// Start empty node

Linkedlist list;

list.push(100);
list.push(100);
list.push(100);

list.print();

list.head->next->next->next = list.head;

if(list.detectLoop(list.head))
{
    cout<<"Loop Found"<<endl;
}else
{
    cout<<"Loop not found"<<endl;
}

return 0;
}
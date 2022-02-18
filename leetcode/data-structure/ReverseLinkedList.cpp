/*
Reverse the Linkedlist

1->2->3->4->NULL
4->3->2->1->NULL
*/


#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int data)
    {
        this->data = data;
    }

};



struct Linkedlist
{

Node * head;
Linkedlist()
{
    head = NULL;
}

// Function to reverse the linkedlist

void reverse()
{
    Node *curr = head;
    Node *prev = nullptr;
    Node *next = nullptr;

    while(curr!= nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

// Function to print the linklist

void print()
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
} // Print function close



void push(int data)
{
    Node* temp = new Node(data);
    temp->next = head;
    head = temp; 
}

};


// main code

int main()
{

    Linkedlist l1;
    l1.push(100);
    l1.push(200);
    l1.push(300);
    l1.push(400);

    cout<<"Given Linkedlist"<<endl;
    l1.print();

    // Call reverse the linkedlist

    l1.reverse();
    cout<<"\n After the reverse linkedlist"<<endl;
   l1.print();
    return 0;

}
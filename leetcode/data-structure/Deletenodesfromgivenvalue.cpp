/*
> Delete nodes from a linkedlist from given value.

*/

#include<iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node *next;
};

class Linkedlist
{

    public:
    void push(Node** head_ref, int data);
    void deleteNode(Node** head_ref, int position);
    void printList(Node* node);
};



void Linkedlist ::push(Node** head_ref, int new_data)
{
    Node *new_node = new Node(); // Created new node
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref)   = new_node;
}

void Linkedlist :: deleteNode(Node** head_ref, int position)
{

    if(*head_ref == NULL)
        return ;

        Node* temp = *head_ref;

        if(position == 0)
         {
             *head_ref = temp->next;

             free(temp);

             return ;
         }
         


}

void Linkedlist :: printList(Node * node)
{

    while(node != NULL)
    {
        cout<<node->data<<"  ";
        node = node->next;
    }


}




int main()
{
    // Initialize node with null
    Node * head = NULL;

    Linkedlist linklist;
    linklist.push(&head, 100);
    linklist.push(&head, 200);
    linklist.push(&head, 300);
    linklist.push(&head, 400);
    linklist.push(&head, 500);


// Print the Linkedlist

linklist.printList(head);

deleteNode(head, 1);

linklist.printList(head);

    return 0;
}

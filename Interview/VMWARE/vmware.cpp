/*
(1) Flip 'N' bits from kth position in a decimal number ''
num from LSB.
(2) Given the pointer to the head node of a linked list, 
changes the next pointers of the nodes so that their order is reversed in given group of size 'k'


SinglyLinkedListNode* reverse(SinglyLinkedListNode* head, int k)
{
    // base case
    if (!head)
        return NULL;
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* next = NULL;
    SinglyLinkedListNode* prev = NULL;
    int count = 0;
 
    /*reverse first k SinglyLinkedListNodes of the linked list */
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
 
    /* next is now a pointer to (k+1)th SinglyLinkedListNode
    Recursively call for the list starting from current.
    And make rest of the list as next of first SinglyLinkedListNode */
    if (next != NULL)
        head->next = reverse(next, k);
 
    /* prev is new head of the input list */
    return prev;
}

*/


#include<iostream>
using namespace std;
 
int toggleKthBit(int n, int k)
{
    return (n ^ (1 << (k-1)));
}
 
// Driver code
int main()
{
    int n = 5, k = 1;
    cout << toggleKthBit(n , k);
    return 0;
}
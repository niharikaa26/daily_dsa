#include<bits/stdc++.h>
using namespace std;
 
/* A linked list node */
struct Node
{
    int data;
    struct Node *next;
};
 
/* Function to pairwise swap elements of a
   linked list */
Node *pairWiseSwap(Node *head)
{
    // If linked list is empty or there is only
    // one node in list
    if (head == NULL || head->next == NULL)
        return head;
 
    // Fix the head and its next explicitly to
    // avoid many if else in while loop
    Node *curr = head->next->next;
    Node *prev = head;
    head = head->next;
    head->next = prev;
 
    // Fix remaining nodes
    while (curr != NULL && curr->next != NULL)
    {
        prev->next = curr->next;
        prev = curr;
        Node *next = curr->next->next;
        curr->next->next = curr;
        curr = next;
    }
     
    prev->next = curr;
 
    return head;
}
 
/* Function to add a node at the beginning of 
   Linked List */
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
 

int main()
{
    struct Node *start = NULL;

    push(&start, 7);
    push(&start, 6);
    push(&start, 5);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2); 
    push(&start, 1);
 
    printf("\n Linked list before calling pairWiseSwap() ");
    printList(start);
 
    start = pairWiseSwap(start);
 
    printf("\n Linked list after calling pairWiseSwap() ");
    printList(start);
 
    return 0;
}
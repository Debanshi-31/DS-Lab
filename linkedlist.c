#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;//stores data
    struct Node *next; // POINTS TO THE NEXT NODE
};
 
void linkedListTraversal(struct Node *ptr)//takes stuct node pointer as argument eg.-struct Node *head;
{
    while (ptr != NULL)// in circular ll we use do-while loop
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{//CREATION OF LL

//1.CREATE NODE POINTERs (* STORES VALUE)
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // 2.Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // 3.Link first and second nodes
    head->data = 7;
    head->next = second;
 
    // Link second and third nodes
    second->data = 11;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
 
    // 4.Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;//in circular ll it points to head.
 
    linkedListTraversal(head);
    return 0;
}
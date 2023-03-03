#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
}Node;

void printf_list(Node* next_node)
{
    while(next_node != NULL)
    {
        printf("%d\n", next_node->data);
        next_node = next_node->next;
    }
}
int main()
{ 
    Node* head = (Node *)malloc(sizeof(Node));
    Node* N1 = (Node *)malloc(sizeof(Node));
    Node* N2 = (Node *)malloc(sizeof(Node));
    Node* tail = (Node *)malloc(sizeof(Node));
    Node* new_node = (Node *)malloc(sizeof(Node));

    head->data = 2;
    head->next = new_node;
    N1->data = 3;
    N1->next = NULL;
    new_node->data = 6;
    new_node->next = N2;
    N2->data = 4;
    N2->next = tail;
    tail->data = 5;
    tail->next = NULL;
    printf_list(head);
}
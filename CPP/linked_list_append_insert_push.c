#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}Node;

void push(Node **head, int newdata)
{
    Node* newnode=(Node *)malloc(sizeof(Node));
    newnode->data = newdata;
    newnode->next = (*head);
    (*head) = newnode;
}

void insertafter(Node* previousnode, int newdata)
{
    if(previousnode == NULL)
    {
        printf("The given node cannot be null\n");
        return;
    }
    else{
        Node* newnode = (Node *)malloc(sizeof(Node));
        newnode->data = newdata;
        newnode->next = previousnode->next;
        previousnode->next = newnode;
    }
}

void append(Node** head, int newdata)
{
    Node* newnode = (Node *)malloc(sizeof(Node));
    Node *lastnode = *head;
    newnode->data = newdata;
    newnode->next = NULL;
    if(*head == NULL){
        *head=newnode;
        return;
    }
    while(lastnode->next != NULL){
        lastnode = lastnode->next;
        lastnode->next = newnode;
        return;
    }



}

void print_list(Node *Node)
{
    while(Node != NULL)
    {
        printf("%d\n", Node->data);
        Node = Node->next;
    }
}

int main()
{
    Node* head = NULL;
    append(&head, 6);
    push(&head, 7);
    push(&head, 1);
    append(&head, 4);
    insertafter(head->next, 8);
    printf("Created linked list: \n");
    print_list(head);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}Node;

void push(Node** head , int newdata)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    if(*head == NULL)
    {
        printf("Linked list cannot be NULL\n");
        return;
    }
    else{
        newnode->data = newdata;
        newnode->next = (*head);
        (*head) = newnode;
    }
}

void deletenode(Node** head, int key)
{
    Node* temp = *head;
    Node* prev = NULL;
    if(temp != NULL  && temp->data==key)
    {
        *head=temp->next;
        temp->next = NULL;
        temp = temp->next;
        return;
    }
    else{
        while(temp != NULL && temp->data != key)
        {
            prev=temp;
            temp=temp->next;
        }
        if(temp == NULL)
        {
            return;
        }
        else{
            prev->next = temp->next;
            temp->next = NULL;
            temp = temp->next;           
        }
    }
}

void printf_list(Node* Node)
{
    while(Node != NULL)
    {
        printf("%d", Node->data);
    }
}
int main()
{

}
//Write a program to create a simple linked list in C using pointer and structure. 
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head = NULL, *second = NULL, *end = NULL;
    head = (struct Node*) malloc (sizeof(struct Node));
    second = (struct Node*) malloc (sizeof(struct Node));
    end = (struct Node*) malloc (sizeof(struct Node));
    head -> data = 50;
    head -> next = second;
    second -> data = 100;
    second -> next = end;
    end -> data = 150;
    end -> next = NULL;
    struct Node *temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
Struct Node
{
    int data;
    Struct Node *next;
};
int main()
{
    Struct Node *head = NULL, *second = NULL, *end = NULL;
    head = (Struct Node*) malloc (sizeof(Struct Node));
    second = (Struct Node*) malloc (sizeof(Struct Node));
    end = (Struct Node*) malloc (sizeof(Struct Node));
    head -> data = 50;
    head -> next = second;
    second -> data = 100;
    second -> next = end;
    
}
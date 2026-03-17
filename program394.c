#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *first;
    struct node *prev;      // $
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, int no)
{}

void InsertLast(PPNODE first, int no)
{}

void InsertAtPos(PPNODE first, int no, int pos)
{}

void DeleteFirst(PNODE first)
{}

void DeleteLast(PNODE first)
{}

void DeleteAtPos(PNODE first, int pos)
{}

void Display(PNODE first)
{}

int Count(PNODE first)
{
     return 0;
}

int main()
{
    PNODE head = NULL;
    return 0;
}
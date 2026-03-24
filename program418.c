#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, PPNODE last, int no)
{
    PNODE newn =  NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*first == NULL && *last == NULL)   // LL is empty
    {
        *first = newn;
        *last = newn;
    }
    else                                 // LL contain one more
    {
      newn -> next = *first;
      (*first) -> prev = newn;
      *first = newn;
    }
    (*last) -> next = *first;
    (*first) -> prev = *last;

}

void InsertLast(PPNODE first, PPNODE last, int no)
{
    PNODE newn =  NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*first == NULL && *last == NULL)   // LL is empty
    {
        *first = newn;
        *last = newn;
    }
    else                             // LL contain one more
    {
      (*last) -> next = newn;
      newn -> prev = *last;
      *last = newn;
    }

    (*last) -> next = *first;
    (*first) -> prev = *last;

}

void DeleteFirst(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last == NULL)       // Link List (LL) is empty
    {
        return;
    }
    else if(*first == *last)     // ekta node ahe      // LL contain 1 node
    {
        free(*first);
        *first=NULL;
        *last=NULL;
    }
    else
    {
        *first = (*first) -> next;
        free((*first)->prev);

        (*last) -> next = *first;
        (*first )-> next = *last;
    }
}

void DeleteLast(PPNODE first, PPNODE last)
{
     if(*first == NULL && *last == NULL)       // Link List (LL) is empty
    {
        return;
    }
    else if(*first == *last)     // ekta node ahe      // LL contain 1 node
    {
        free(*first);
        *first=NULL;
        *last=NULL;
    }
    else
    {
        *last = (*last) -> prev;
        free((*last)->next);
        
        (*last) -> next = *first;
        (*first) -> prev = *last;
    }
}

void Display(PNODE first, PNODE last)
{
    // Important

    if(first==NULL && last==NULL)   // LL is empty
    {
        printf("Linked List Is Empty\n");
        return;
    }

    printf(" <=> ");
    do
    {
        printf("| %d  | <=>", first->data);
        first = first -> next;
    }while(first != last->next);

    printf("\n");
}

int Count(PNODE first, PNODE last)
{
    int iCount = 0;

    // Important

    if(first==NULL && last==NULL)   // LL is empty
    {
        return 0;
    }

     do
    {
        iCount++;
        first = first -> next;
    }while(first != last->next);
    
    return iCount;
}




void DeleteAtPos(PPNODE first, PPNODE last, int pos)
{}

void InsertAtPos(PPNODE first, PPNODE last, int no, int pos)
{}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet = 0;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);
    
    Display(head,tail);
    iRet=Count(head,tail);
    printf("Numbers of nodes are : %d\n",iRet);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);
   
    DeleteFirst(&head,&tail);
    return 0;
}
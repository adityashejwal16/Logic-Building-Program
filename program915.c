// DS Middle Element

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int MiddleElement(PNODE first)
{
    int iCount = 0;
    int Middle = 0;
    int i = 0;
    PNODE temp = first;

    while(first != NULL)
    {
      iCount++;
      first = first -> next;
    }
    
    Middle = (iCount/2) + 1;

    first = temp;

    for(i = 1; i < Middle; i++)
    {
        first = first -> next;
    }
    return(first->data);
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)   // Type 2
        {
            temp = temp -> next;
        }

        temp->next = newn;
    }
}



void Display(PNODE first)
{
    while(first != NULL)    // Type 1
    {
        printf("| %d | -> ",first->data);
        first = first -> next;
    }
    printf("NULL\n");
}



int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertLast(&head, 11);
    InsertLast(&head, 21);
    InsertLast(&head, 51);
    InsertLast(&head, 101);
    InsertLast(&head, 111);

    Display(head);

    iRet = MiddleElement(head);

    printf("Middle element is %d\n",iRet);
    
    return 0;
}
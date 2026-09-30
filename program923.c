// DS

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;



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

bool CheckLoop(PNODE first)
{
    bool bFlag = false;

    PNODE fast = first;
    PNODE slow = first;

    while((fast != NULL)&&(fast->next != NULL))
    {
        fast = fast -> next -> next;
        slow = slow -> next;

        if(fast == slow)
        {
            bFlag = true;
            break;
        }
    }
    return  bFlag;
}

int main()
{
    int iRet = 0;
    int Pos = 4, i = 0;
    bool bRet = false;

    PNODE head = NULL;


    InsertLast(&head, 11);
    InsertLast(&head, 21);
    InsertLast(&head, 51);
    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);
    InsertLast(&head, 151);


    bRet = CheckLoop(head);

    if(bRet == true)
    {
        printf("loop exist\n");
    }
    else
    {
        printf("there is no loop\n");
    }
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
   int data;
   struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

// Call By Address

void InsertFrist(PPNODE first , int no)
{
   PNODE newn = NULL;

   newn = (PNODE)malloc(sizeof(node));

   newn -> data = no;
   newn -> next = NULL;

   if(*first ==  NULL)   // LL is empty
   {
      (*first) = newn;
   }
   else                 // LL contain atleast 1 node
   {
       newn -> next = (*first);
       (*first) = newn;
   }

}

void InsertLast(PPNODE first , int no)
{
   PNODE newn = NULL;

   newn = (PNODE)malloc(sizeof(node));

   newn -> data = no;
   newn -> next = NULL;

   if(*first ==  NULL)   // LL is empty
   {
      *first = newn;
   }
   else                 // LL contain atleast 1 node
   {

   }
}

int main()
{
   PNODE head = NULL;
   
   InsertFrist(&head,51);
   InsertFirst(&head,21);
   InsertFirst(&head,11);

   return 0;
}
#include<iostream>
using namespace std;

struct node
{
    int data; 
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class  SinglyLLLnode
{
    public:
          PNODE first;
          int iCount;

          SinglyLL()
          {
            printf("Object of singlyLL gets cretated\n");
            first = NULL;
            iCount = 0;
          }

          void InsertFirst(int no)
          {}
};

int main()
{
    return 0;
}
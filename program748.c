#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*first == NULL)      // If tree is empty
    {
        *first = newn;
    }
    else                    // If tree contains atleast one node
    {   
        temp = *first;

        while(1)
        {
            if(no > temp->data)        // If element is greater
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp -> rchild;
            }
            else if(no < temp->data)   // If element is smaller
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if(no == temp->data)   // If element is identical
            {
                printf("Unable to insert as element is duplicate\n");
                free(newn);
                break;
            }
        }
    }
}

// L        D       R
void Inorder(PNODE first)
{
    if(first != NULL)
    {
        Inorder(first->lchild);
        printf("%d\n",first->data);
        Inorder(first->rchild);
    }
}

// D    L       R
void Preorder(PNODE first)
{
    if(first != NULL)
    {
        printf("%d\n",first->data);
        Preorder(first->lchild);
        Preorder(first->rchild);
    }
}

// L       R        D
void Postorder(PNODE first)
{
    if(first != NULL)
    {
        Postorder(first->lchild);
        Postorder(first->rchild);
        printf("%d\n",first->data);
    }
}

bool Search(PNODE first, int no)
{
    bool bFlag = false;

    while(first != NULL)
    {
        if(no > first->data)
        {
            first = first->rchild;
        }
        else if(no < first->data)
        {
            first = first -> lchild;
        }
        else if(no == first->data)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int Count(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        iCount++;
        Count(first->lchild);
        Count(first->rchild);
    }

    return iCount;
}

int CountParentNodes(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        if((first->lchild != NULL) || (first->rchild != NULL))
        {
            iCount++;
        }

        CountParentNodes(first->lchild);
        CountParentNodes(first->rchild);
    }

    return iCount;
}

int CountChildNodes(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        if((first->lchild == NULL) && (first->rchild == NULL))
        {
            iCount++;
        }

        CountChildNodes(first->lchild);
        CountChildNodes(first->rchild);
    }

    return iCount;
}

int main()
{
    PNODE head = NULL;
    bool bRet = false;
    int iRet = 0;

    Insert(&head, 21);
    Insert(&head, 11);
    Insert(&head, 51);
    Insert(&head, 67);
    Insert(&head, 40);
    Insert(&head, 10);
    Insert(&head, 13);
    Insert(&head, 38);
    
    printf("Inorder traversal\n");
    Inorder(head);

    bRet = Search(head,47);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else 
    {
        printf("There is no such element\n");
    }

    iRet = Count(head);
    printf("Number of elements are : %d\n",iRet);

    iRet = CountParentNodes(head);
    printf("Number of parent nodes are : %d\n",iRet);

    iRet = CountChildNodes(head);
    printf("Number of child nodes are : %d\n",iRet);

    return 0;
}

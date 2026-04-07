// Doubly Lieanr

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private:
        PNODE first;
        int iCount;

    public:
        DoublyLL()
        {
            cout<<"Object of DoublyLL gets created.\n";
            this->first = NULL;
            this->iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;
             
            newn = new NODE;

            newn->data=no;
            newn->next=NULL;
            newn->prev=NULL;

            if(first==NULL)
            {
                first=newn;
            }
            else
            {
                newn->next=first;
                first->prev=newn;
                first=newn;
            }
            iCount++;
        }

        void InsertLast(int no)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;
             
            newn = new NODE;

            newn->data=no;
            newn->next=NULL;
            newn->prev=NULL;

            if(first==NULL)
            {
                first=newn;
            }
            else
            {
               temp = this->first;
               while(temp->next != NULL)
               {
                temp=temp->next;
               }
            }

            temp->next=newn;
            newn->prev=newn;

            iCount++;
        }

        void InsertAtPos(int no, int pos)
        {
            int iCnt = 0;
            int iSize = 0;
            PNODE temp =NULL;
            PNODE newn = NULL;

            iSize = Count();

            if(pos < 1 || pos > iSize+1)
            {
                cout<<"Invalide Location";
                return;
            }
            if(pos==1)
            {
                InsertFirst(no);
            }
            else if(pos == iSize+1)
            {
                InsertLast(no);
            }
            else
            {
                newn = new NODE;

                newn->data=no;
                newn->next=NULL;
                newn->prev=NULL;

                temp = this->first;

                for(iCnt = 1; iCnt < pos -1; iCnt++ )
                {
                    temp=temp->next;
                }

                newn->next=temp->next;
                temp->next->prev=newn;
                temp->next=newn;
                newn->prev=temp;
            }
        }

        void DeleteFirst()
        {
            PNODE temp = NULL;

            if(this->first==NULL)
            {
                return;
            }
            else if(this->first->next ==NULL)
            {
                delete this->first;
                this->first=NULL;
            }
            else
            {
                temp = this->first;

                this->first=this->first->next;
                delete(temp);

                this->first->prev=NULL;
            }
        }

        void DeleteLast()
        {
            PNODE temp = NULL;

            if(this->first==NULL)
            {
                return;
            }
            else if(this->first->next ==NULL)
            {
                delete this->first;
                this->first=NULL;
            }
            else
            {
                temp = this->first;

                while(temp->next->next != NULL)
                {
                    temp=temp->next;
                }
                delete temp->next;
                temp->next=NULL;
            }
        }

        void DeleteAtPos(int pos)
        {
            int iCnt = 0;
            int iSize = 0;
            PNODE temp =NULL;

            PNODE target = NULL;
            
            iSize = Count();

            if(pos < 1 || pos > iSize)
            {
                cout<<"Invalide Location";
                return;
            }
            if(pos==1)
            {
                DeleteFirst();
            }
            else if(pos == iSize)
            {
                DeleteLast();
            }
            else
            {
                temp = this->first;

                for(iCnt = 1; iCnt < pos -1; iCnt++ )
                {
                    temp=temp->next;
                }
               
                target = temp->next;

               temp -> next = target -> next;
               temp ->next -> prev = temp;
                delete(target);
                
            }
        }

        void Display()
        {
            PNODE temp = this->first;
            
            cout<<"\nN <- ";
            while(temp != NULL)
            {
                cout<<" |"<<temp->data<<"| <=> ";
                temp=temp->next;
            }
            cout<<"N\n";
        }

        int Count()
        {
            int iCount = 0;

            PNODE temp = this->first;

            while(temp != NULL)
            {
                iCount++;
                temp = temp -> next;
            }
            return iCount;
        }
};

int main()
{
    DoublyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    
    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    obj.DeleteFirst();
    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    obj.DeleteLast();

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    obj.InsertAtPos(105,4);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    obj.DeleteAtPos(4);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    return 0;
}
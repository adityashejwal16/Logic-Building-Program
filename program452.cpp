// Doubly Circular

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

class DoublyCL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;

    public:
        DoublyCL()
        {
            cout<<"Object of DoublyCL gets created.\n";
            this->first = NULL;
            this->last = NULL;
            this->iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;

            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if(this->first == NULL && this->last==NULL)
            {
                this->first=newn;
                this->last=newn;
            }
            else
            {
                newn->next=first;
                first->prev=newn;
                first = newn;
            }
             this->last->next=this->first;
             this->first->prev=this->last;

        }

        void InsertLast(int no)
        {
           PNODE newn = NULL;

            newn = new NODE;

            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if(this->first == NULL && this->last == NULL) // LL is empty
         {
            this->first = newn;
            this->last = newn;
         }
         else    // LL contains one or more
        {
            this->last->next = newn;
             newn->prev = this->last;
            this->last = newn;
         }

           this->last->next = this->first;
           this->first->prev = this->last;
           
        }

        void InsertAtPos(int no, int pos)
        {
            int iCount=0;
            int i = 0;
            PNODE temp=NULL;
            PNODE newn = NULL;

            iCount=Count();

            if(pos < 1 || pos > iCount+1)
            {
                cout<<"Invalide Position\n";
                return;
            }
            if(pos==1)
            {
                InsertFirst(no);
            }
            else if(pos==iCount+1)
            {
                InsertLast(no);
            }
            else
            {
                newn = new  NODE;

                newn->data=no;
                newn->next=NULL;
                newn->prev=NULL;

                temp=this->first;

                for(i=1; i<pos-1; i++)
                {
                    temp=temp->next;
                }

                newn->next=temp->next;
                newn->next->prev=newn;

                temp->next=newn;
                newn->prev=temp;

            }
        }

        void DeleteFirst()
        {
           if(this->first==NULL && this->last==NULL) // LL is Empty
           {
            return;
           }
           else if(this->first == this->last)  // 1 node
           {
             delete this->first;
             this->first=NULL;
             this->last=NULL;
           }
           else
           {
            this->first = this->first->next;
            delete this->first->prev;

            (this->last)->next=this->first;
            (this->first)->prev=this->last;
           }
        }

        void DeleteLast()
        {
            if(this->first==NULL && this->last==NULL) // LL is Empty
           {
            return;
           }
           else if(this->first == this->last)  // 1 node
           {
             delete this->first;
             this->first=NULL;
             this->last=NULL;
           }
           else
           {
            this->last=this->last->prev;
            delete this->last->next;

             this->last->next=this->first;
             this->first->prev=this->last;
           }
        }

        void DeleteAtPos(int pos)
        {
            int iCount=0;
            int i = 0;
            PNODE temp=NULL;
           

            iCount=Count();

            if(pos < 1 || pos > iCount)
            {
                cout<<"Invalide Position\n";
                return;
            }
            if(pos==1)
            {
               DeleteFirst();
            }
            else if(pos==iCount)
            {
                DeleteLast();
            }
            else
            {
                temp=this->first;

                for(i=1; i<pos-1; i++)
                {
                    temp=temp->next;
                }
                temp->next=temp->next->next;
                delete temp->next->prev;
                temp->next->prev=temp;
            }
        }

        void Display()
        {
            if(first == NULL && last == NULL)
            {
                cout<<"Linked List is empty\n";
                return;
            }

            PNODE temp = first;
            cout<<"<=>";

            do
            {
                cout<<" |"<<temp->data<<"| <=>";
                temp=temp->next;
            }while(temp != first);

            cout<<"\n";
        }

        int Count()
        {
            PNODE temp=first;
            int iCount = 0;
            if(first==NULL && last==NULL)
            {
                return 0;
            }

            do
            {
                iCount++;
                temp=temp->next;
            }while(temp != first);

            return iCount;
        }
};

int main()
{
    DoublyCL obj;
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
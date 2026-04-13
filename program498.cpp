///////////////////////////////////////////////////////////////////////
// Final code of Queue using Generic Approach
///////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
class Queuenode
{
    public:
        T data;
        Queuenode<T> *next;

        Queuenode(T no)
        {
            this->data = no;
            this->next = NULL;
        }
};

template <class T>
class Queue
{
    private:
        Queuenode<T> *first;
        Queuenode<T> *last;
        
        int iCount;

    public:
        Queue();

        void enqueue(T);          
        T dequeue();              
        void Display();
        int Count();
};

template <class T>
Queue<T> :: Queue()
{
    cout<<"Queue gets created succesfully...\n";

    this->first = NULL;
    this->last = NULL;

    this->iCount = 0;
}

template <class T>
void Queue<T> :: enqueue(T no)
{
    Queuenode<T> *newn = NULL;

    newn = new Queuenode<T>(no);

    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        this->last->next = newn;
        this->last = this->last->next;
    }

    this->iCount++;
}

template <class T>
T Queue<T> :: dequeue()
{
    T Value = 0;
    Queuenode<T> *temp = this->first;

    if(this->first == NULL && this->last == NULL)
    {
        cout<<"Queue is empty\n";
        return -1;
    }

    Value = this->first->data;

    this->first = this->first->next;
    delete temp;

    this->iCount--;

    return Value;
}

template <class T>
void Queue<T> :: Display()
{
    Queuenode<T> *temp = this->first;

    if(this->first == NULL && this->last == NULL)
    {
        cout<<"Queue is empty\n";
        return;
    }

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | - ";
        temp = temp->next;
    }

    cout<<"\n";
}

template <class T>
int Queue<T> :: Count()
{
    return this->iCount;
}

int main()
{
    Queue<int> *qobj = new Queue<int>();

    qobj->enqueue(11);
    qobj->enqueue(21);
    qobj->enqueue(51);
    qobj->enqueue(101);
    
    qobj->Display();

    cout<<"Number of elements in queue are : "<<qobj->Count()<<"\n";

    cout<<"Removed element is : "<<qobj->dequeue()<<"\n";
    
    qobj->Display();

    cout<<"Number of elements in queue are : "<<qobj->Count()<<"\n";

    cout<<"Removed element is : "<<qobj->dequeue()<<"\n";
    
    qobj->Display();

    cout<<"Number of elements in queue are : "<<qobj->Count()<<"\n";

    qobj->enqueue(121);

    qobj->Display();

    cout<<"Number of elements in queue are : "<<qobj->Count()<<"\n";

    delete qobj;
    
    return 0;
}
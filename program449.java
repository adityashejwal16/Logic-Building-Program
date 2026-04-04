// Doubly Circular LL

class node
{
    public int data;
    public node next;
    public node prev;

    public node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyCL
{
    private node first;
    private node last;
    
    private int iCount;

    public DoublyCL()
    {
        System.out.println("Object of DoublyCL gets created.");
        
        this.first = null;
        this.last = null;
        
        this.iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;

        newn = new node(no);

        newn.data=no;
        newn.next=null;
        newn.prev=null;

        if(this.first == null && this.last == null)
        {
           this.first=newn;
           this.last=newn;
        }
        else
        {
            newn.next=first;
            first.prev=newn;
            first = newn;

        }

        this.last.next=this.first;
        this.first.prev=this.last;

         this.iCount++;
    }

    public void InsertLast(int no)
    {
        int iCount = 0;
        node newn = null;

        newn = new node(no);

        newn.data=no;
        newn.next=null;
        newn.prev=null;

        if(this.first == null && this.last == null)
        {
           this.first=newn;
           this.last=newn;
        }
        else
        {
            this.last.next=newn;
            newn.prev=this.last;
            this.last=newn;
        }
         this.last.next=this.first;
        this.first.prev=this.last;

         this.iCount++;
    }

    public void InsertAtPos(int no, int pos)
    {
        int iCount = 0;
        int i = 0;
        node temp = null;
        node newn = null;

        iCount=Count();

        if(pos < 1 || pos > iCount+1)
        {
            System.out.println("Invalide position");
            return;
        }
        else if(pos==1)
        {
            InsertFirst(no);
        }
        if(pos==this.iCount+1)
        {
            InsertLast(no);
        }
        else
        {
            newn = new node(no);   // Memory Allocate

            newn.data = no;
            newn.next = null;
            newn.prev =null;

            temp=this.first;

            for(i=1; i<pos-1; i++)
            {
                temp=temp.next;
            }
            newn.next=temp.next;
            newn.next.prev=newn;

            temp.next=newn;
            newn.prev=temp;
        }
    }

    public void DeleteFirst()
    {
        if(this.first==null && this.last==null)
        {
            return;
        }
        else if(this.first==this.last)
        {
            
            this.first=null;
            this.last=null;
        }
        else
        {
            this.first=this.first.next;
        }
        System.gc();
        this.last.next=this.first;
        this.first.prev=this.last;
    }
    
    public void DeleteLast()
    {
        if(this.first==null && this.last==null)
        {
            return;
        }
        else if(this.first==this.last)
        {
            
            this.first=null;
            this.last=null;
        }
        else
        {
            this.last=last.prev;
            this.last.next=this.first;

            this.first.prev=this.last;
            
        }
        System.gc();
            this.iCount--;
        
    }
    
    public void DeleteAtPos(int pos)
    {
        int iCount = 0;
        int i = 0;
        node temp = null;
        
        iCount=Count();
        
        if(pos < 1 || pos > iCount)
        {
            System.out.println("Invalide position");
            return;
        }
        else if(pos==1)
        {
            DeleteFirst();
        }
        if(pos==iCount)
        {
           DeleteLast();
        }
        else
        {
            temp=this.first;

            for(i=1; i<pos-1; i++)
            {
                temp=temp.next;
            }

            temp.next=temp.next.next;
            //temp.next.prev;
            temp.next.prev=temp;
        }
        System.gc();
        this.iCount--;
    }
    
    public void Display()
    {
        node temp = first;

        if(first == null && last == null)
        {
            System.out.println("Linked List is Empty");
            return;
        }
        System.out.printf("<=>");

        do
        {
            System.out.print("| "+temp.data+"| <=>");
                temp=temp.next;
        }while(temp != first);
        System.out.printf("\n");
    }

    public int Count()
    {
        return this.iCount;
    }
}

class program449
{
    public static void main(String A[])
    {
        DoublyCL obj = null;
        int iRet = 0;

        obj = new DoublyCL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        
        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);
        
        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);

        obj.DeleteFirst();

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);

        obj.DeleteLast();

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);
       
        obj.InsertAtPos(105,4);

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);
       
        obj.DeleteAtPos(4);
        
        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);
    
        // Important for memory deallocation 
        obj = null;
        System.gc();
    }
}
// Singly Circular

class node
{
    public int data;
    public node next;

    public node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyCL
{
    private node first;
    private node last;
    
    private int iCount;

    public SinglyCL()
    {
        System.out.println("Object of SinglyCL gets created.");
        
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

         if(this.first==null && this.last==null)
         {
            this.first=newn;
            this.last=newn;
         }
         else
         {
            newn.next=this.first;
            this.first=newn;
         }

         this.last.next=this.first;
         this.iCount++;
    }

    public void InsertLast(int no)
    {
        node newn = null;

         newn = new node(no);
         newn.data=no;
         newn.next=null;

         if(this.first==null && this.last==null)
         {
            this.first=newn;
            this.last=newn;
         }
         else
         {
           this.last.next=newn;
           this.last=newn;
         }

         this.last.next=this.first;
         this.iCount++;
    }

    public void InsertAtPos(int no, int pos)
    {
        int iCount = 0;
        int i = 0;
        node newn = null;
        node temp = null;

        iCount=Count();

        if(pos < 1 || pos > iCount+1 )
        {
           System.out.println("Invalide position");
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
            newn = new node(no);

            newn.data=no;
            newn.next=null;

            temp=this.first;

            for(i=1; i < pos-1; i++)
            {
                temp=temp.next;
            }
            newn.next=temp.next;
            temp.next=newn;
        }
    }

    public void DeleteFirst()
    {
        node temp  = null;

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
            temp=this.first;
            this.first=this.first.next;

            this.last.next=this.first;
        }
        System.gc();
    }
    
    public void DeleteLast()
    {
        node temp  = null;

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
            temp=this.first;
            while(temp.next != this.last)
            {
                temp=temp.next;
            }
            this.last=temp;

            this.last.next=this.first;
            
        }
        System.gc();
    }
    
    public void DeleteAtPos(int pos)
    {
         int iCount = 0;
        int i = 0;
        node target = null;
        node temp = null;

        iCount=Count();

        if(pos < 1 || pos > iCount)
        {
           System.out.println("Invalide position");
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
            temp=this.first;

            for(i=1; i < pos-1; i++)
            {
                temp=temp.next;
            }

            target=temp.next;

            temp.next=target.next;
        }
        System.gc();
    }
    
    public void Display()
    {
        node temp = first;

        do
        {
            System.out.print("| "+ temp.data +" |  ->");
            temp=temp.next;
        }while(temp != first);

        System.out.print("\n");
    }

    public int Count()
    {
        return this.iCount;
    }
}

class program447
{
    public static void main(String A[])
    {
        SinglyCL obj = null;
        int iRet = 0;

        obj = new SinglyCL();

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
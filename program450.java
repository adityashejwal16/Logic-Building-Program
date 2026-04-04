// Doubly Linear

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

class DoublyLL
{
    private node first;
    
    private int iCount;

    public DoublyLL()
    {
        System.out.println("Object of DoublyLL gets created.");
        
        this.first = null;
        
        this.iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;

        newn = new node(no);

        newn.data=no;
        newn.next=null;
        newn.prev=null;

        

        if(first == null)
        {
            first=newn;
        }
        else
        {
            newn.next=first;
            first.prev=newn;
            first=newn;
        }
        iCount++;


    }

    public void InsertLast(int no)
    {
        node newn = null;
        node temp = null;

        newn = new node(no);

        newn.data=no;
        newn.next=null;
        newn.prev=null;

        

        if(first == null)
        {
            first=newn;
        }
        else
        {
            temp = first;

            while(temp.next != null)
            {
               temp=temp.next;
            } 

            temp.next = newn;
            newn.prev = temp;           
        }
         iCount++;
    }

    public void InsertAtPos(int no, int pos)

    {
        node newn = null;
        node temp = null;
        int iCnt = 0;
        int iSize = 0;

        iSize = Count();   //count call

    if(pos < 1 || pos > iSize + 1)
    {
        System.out.println("Invalid position");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iSize + 1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new node(no);

        temp = first;

        for(iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp.next;
        }

            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
            newn.prev = temp;

             iCount++;
     }
   
}

    public void DeleteFirst()
    {
       if(first==null)
       {
         return;
       }
       else if( first.next==null)
       {
         first = null;
       }
       else
       {
        first=first.next;
       }
       System.gc();
       iCount--;
    }
    
    public void DeleteLast()
    {
        node temp = null;

        if(first==null)
       {
         return;
       }
       else if( first.next==null)
       {
         first = null;
       }
       else
       {
           temp = first;

           while(temp.next.next != null)
           {
            temp = temp.next;
           }
           temp.next=null;
       }
       System.gc();
       iCount--;
       
    }
    
      public void DeleteAtPos(int pos)
    {
        int iCnt = 0;
        int iSize = 0;

        node temp = null;

        iSize = Count();   //count call

    if(pos < 1 || pos > iSize)
    {
        System.out.println("Invalid position");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iSize)
    {
        DeleteLast();
    }
    else
    {
       temp=first;

       for(iCnt = 1; iCnt < pos-1; iCnt++)
       {
        temp=temp.next;
       }

       temp.next=temp.next.next;
       temp.next.prev = temp;

        iCount--;
    }
    }
    
     public void Display()
{  
      node temp = first;

      while(temp != null)
      {
         System.out.print(" <- | " + temp.data + " | -> ");
         temp = temp.next;
      }

    System.out.printf("null\n");
}


    public int Count()
    {
        return iCount;
    }
}

class program450
{
    public static void main(String A[])
    {
        DoublyLL obj = null;
        int iRet = 0;

        obj = new DoublyLL();

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
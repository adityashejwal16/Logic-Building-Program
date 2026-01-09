/*
   iRow : 4
   iCol : 4

   * * * *
   2 2 2 2
   * * * * 
   4 4 4 4

*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i=0; 
        int j=0;

        for(i=1; i<=iRow; i++)
        {
            for(j=1; j<=iCol; j++)
            {
                if((i % 2 ==) 0)
                {
                    System.out.print("i+\t");
                }
                else
                {
                   System.out.print(""); 
                }
            }
            
            System.out.println();
        }
    }
}

class Program168
{
    public static void main(String A[])
    {
       Scanner sobj = new Scanner(System.in);
       int iValue1=0, iValue2=0;

       System.out.println("Enter Number Of Rows :");
       iValue1=sobj.nextInt();

       System.out.println("Enter Number Of Columns :");
       iValue2=sobj.nextInt();

       Pattern pobj=new Pattern();
       pobj.Display(iValue1,iValue2); // call by value
    }
}
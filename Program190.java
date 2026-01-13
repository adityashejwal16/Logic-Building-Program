/*
   Diagonal PPTTERN 
   
   iRow : 4
   iCol : 4
   
   $ $ $ $  
   $ $ * $ 
   $ * $ $ 
   $ $ $ $    Tringle Star (Output)
   
   
   
   
   
*/
import java.util.Scanner;

class Pattern
{   
    // FILTER FOE SEQURE MATRIX
    public void Display(int iRow, int iCol)
    {
        int i=0; 
        int j=0;
        
        if(iRow != iCol)
        {
            System.out.println("Invalid Input");
            System.out.println("Row number column number should be same");
            return;
        }
        for(i=1; i<=iRow; i++)
        {
              
            for(j=1; j<=iCol; j++)
            {
                if(i <  j)
                {
                   System.out.printf("#\t",j);
                }
                else
                {
                   System.out.printf("*\t");
                }    
            
            }
            System.out.println();
        } 
    }
}

class Program190
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
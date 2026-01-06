// input : 5
// output: 1 * 3 * 5 *

import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        int iCnt =0;

        for(iCnt = 1; iCnt<=iNo; iCnt++)
           {
             if(iCnt % 2==0)
             {
                System.out.println("*\t");
             }
           }
        {
            System.out.print("iCnt+\t");
        }

        System.out.println();
        
    }
}
class Program154
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the Frequency:");
        iValue=sobj.nextInt();
        
        Pattern pobj = new Pattern();
    
        pobj.Display(iValue);
    }
}
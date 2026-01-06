// input : 5
// output: * * * * *

import java.util.*;
class Pattern
{
    public void Dsplay(int iNo)
    {
        int iCnt =0;

        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            System.out.print("*\t");
        }

        System.out.println();
        
    }
}
class program152
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
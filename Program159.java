// input : 5
// output: 0 1 2 3 4 5 6
//         1 2 3 4 5 6

import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        int iCnt =0;

        for(iCnt =0 ; iCnt<=iNo; iCnt++)
           {
             
            System.out.print(iCnt+"\t");
        }

        System.out.println();
        
    }
}
class Program159
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
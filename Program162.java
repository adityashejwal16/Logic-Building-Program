// input : 6
// output: 1 * 2 * 3 *
//         

import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        int iCnt =0;
        int iCount = 0;

        iCount =1;
        for(iCnt =1; iCnt<=iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print("*\t");
            }
            else
            {
               System.out.print(iCount+"\t");
               iCount++;
            }
             
           
        }
        

        System.out.println();
        
    }
}
class Program162
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
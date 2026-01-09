/*
   input : 5
   Output : a  b  c  d   e
   INDEX : 1   2  3   4   5
   ASCII : 97 98 99 100 101
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        int i = 96;
        for(iCnt=1; iCnt<=iNo; iCnt++)
        {
           System.out.printf("%d\t",i+iCnt);
        }
        System.out.println();
    }
}
class Program171
{
    public static void main(String A[])
    {
       Scanner sobj = new Scanner(System.in);
       int iValue=0;

       System.out.println("Enter the Frequency :");
       iValue=sobj.nextInt();


       Pattern pobj=new Pattern();
       pobj.Display(iValue); // call by value
    }
}
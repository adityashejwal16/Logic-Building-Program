/*
   input : 8
   Output : z y x w v u t s
   INDEX :  1 2 3 4 5 6 7 8
   
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
       
        char ch = 'Z';
        

        for(iCnt=1; iCnt<=iNo; iCnt++,ch--)
        {
        
                System.out.printf("%c\t",ch);
        }
           
        System.out.println();
    }
}
class Program178
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
// Factorial CalculateFactorial *
import java.util.*;

class Number
{
    
    public int CalculateFactorial(int iNo)
    {
        int i = 0;
         long iFact = 1;     // Important

        if(iNo < 0)
        {
            iNo = - iNo;        // Updator
        }
         i = 1;
        whike( i<=iNo)
        {
            iFact = iFact * i;    // change
             i++;
        }
        return iFact; 
    }
}  // End off Number class

class Program88
{
    public static void main(String A[])
    {
        int iValue = 0;
        long iRet = 0;
    
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();
        
        Number nobj = new Number();
        iRet=nobj.CalculateFactorial(iValue);

        System.out.println("Factorial is :"+iRet);


        // Important
        
        sobj = null;
        nobj = null;

        System.gc();

    }
}
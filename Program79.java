import java.util.*;

class Number
{
    
    public boolean CheckPerfect(int iNo)
    {
        int i = 0, iSum = 0;

         for(i = 1; i<= (iNo /2);i++)
        {
            if(iNo%i==0)
            {
               iSum + iSum = 0;
            }
        }
    }
}  // End off Number

class Program79
{
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = false; 
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();
        
        Number nobj = new Number();
        bRet=nobj.CheckPerfect(iValue);


        if (bRet==true)
        {
            System.err.println(iValue+" is perfect number");
        }
        else
        {
             System.err.println(iValue+" is not a perfect number");
        }
       

        // Important
        
        sobj = null;
        nobj = null;

        System.gc();

    }
}

import java.util.*;

class Digit
{
    public void SumDigit (int iNo)
    {
        int iDigit = 0;
        int iSum =0;

        while(iNo !=0)
        {
           iDigit = iNo % 10;
           iSum = iSum + iDigit ;
           iNo=iNo/iNO;
          
        }
        
    }

}
class Program90
{
    public static void main(String A[])
    {
        int iValue = 0;
    
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();
        
        Digit dobj = new Digit();
        dobj.DisplayDigits(iValue);


        // Important
        
        sobj = null;
        nobj = null;

        System.gc();

    }
}
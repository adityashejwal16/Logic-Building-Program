import java.util.*;

class program823
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        int iCount = 0, iDigit = 0, iTemp = 0, iSum = 0, iCountTemp = 0, iPow = 0;

        iTemp = iNo;

        // Count number of digits
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount++;
            iNo = iNo / 10;
        }

        iNo = iTemp;
        iCountTemp = iCount;

        // y = iCount   -> 3
        // x = iDigit   
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iPow = 1;

                // Count power
                while(iCount != 0)
                {
                    iPow = iPow * iDigit;
                    iCount--;
                }
            
            iCount = iCountTemp;
    
            iSum = iSum + iPow;
            iNo = iNo / 10;
        }

        if(iSum == iTemp)
        {
            System.out.println(iTemp + " is a armstromg number");
        }
        else
        {
             System.out.println(iTemp + " is not a armstromg number");           
        }
    }
}
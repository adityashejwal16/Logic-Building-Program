import java.util.*;

class program816
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iFact = 0, i = 0, iTemp = 0, iSum = 0, iDigit = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iTemp = iNo; 

        // 145
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            for(iFact = 1, i = 1; i <= iDigit; i++)
            {
                iFact = iFact * i;
            }

            iSum = iSum + iFact;

            iNo = iNo / 10;
        }

        if(iSum == iTemp)
        {
            System.out.println("Its a strong number");
        }
        else
        {
            System.out.println("Its not a strong number");
        }
    }
}
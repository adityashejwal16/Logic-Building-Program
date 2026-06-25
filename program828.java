import java.util.*;

class program828
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iSum = 0, iDigit = 0, iTemp = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        if(iTemp % iSum == 0)
        {
            System.out.println(iTemp + " is Niven / Harshad number");
        }
        else
        {
            System.out.println(iTemp + " is not Niven / Harshad number");
        }
        
    }
}
import java.util.*;

class program830
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iDigit = 0, iTemp = 0, iRev = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo / 10;
        }
        
        if(iTemp == iRev)
        {
            System.out.println(iTemp + " is pallindrome number");
        }
        else
        {
            System.out.println(iTemp + " is not pallindrome number");
        }
    }
}

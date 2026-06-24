import java.util.*;

class program820
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        int iCount = 0, iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount++;
            iNo = iNo / 10;
        }

        System.out.println(iCount);
    }
}
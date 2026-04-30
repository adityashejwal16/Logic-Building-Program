import java.util.Scanner;

class program620
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int No = sobj.nextInt();
        int iDigit = 0;
        int iCount = 0;

        while(No != 0)
        {
            iDigit = No % 2;
            if(iDigit == 1)
            {
                iCount++;
            }
            No = No / 2;
        }

        System.out.println("Number of 1's are : "+iCount);
    }
}
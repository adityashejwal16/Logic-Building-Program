import java.util.Scanner;

class program619
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int No = sobj.nextInt();
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 2;
            System.out.print(iDigit);
            No = No / 2;
        }
    }
}
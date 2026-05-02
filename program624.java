import java.util.Scanner;

class program624
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        int iMask = 4;
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("3rd bit is ON");
        }
        else
        {
            System.out.println("3rd bit is OFF");
        }
    }
}
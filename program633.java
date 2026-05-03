import java.util.Scanner;

class program633
{
    public static void main(String A[])
    {
        int iNo = 0, iMask = 0x1, iResult = 0, iPos = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter position : ");
        iPos = sobj.nextInt();

        iMask = iMask << (iPos - 1);
        
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println(iPos+"th Bit is ON");
        }
        else
        {
            System.out.println(iPos+"th Bit is OFF");
        }
    }
}
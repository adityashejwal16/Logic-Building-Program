import java.util.Scanner;

class program629
{
    public static void main(String A[])
    {
        int iNo = 0, iMask = 0, iResult = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iMask = 0x00004000;
        
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("15th bit is ON");
        }
        else
        {
            System.out.println("15th bit is OFF");
        }
    }
}
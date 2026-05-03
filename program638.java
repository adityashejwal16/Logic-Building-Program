// Toggle Bit
// iPos = 5

// iNo =            0100    1101
// iMask =          0001    0000    ^
// --------------------------------------
// iNo =            0101    1101

// iNo =            0101    1101
// iMask =          0001    0000    ^
// --------------------------------------
// iNo =            0100    1101

import java.util.Scanner;

class program638
{
    public static void main(String A[])
    {
       int iNo = 0, iMask = 0x1, iPos = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter position : ");
        iPos = sobj.nextInt();
        
        iMask = iMask << (iPos - 1);

        iNo = iNo ^ iMask;

        System.out.println("Updated number : "+iNo);
    }
}
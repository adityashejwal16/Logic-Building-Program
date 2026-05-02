import java.util.Scanner;

class program622
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
            iCount = iCount + iDigit;
            No = No / 2;
        }

        System.out.println("Number of 1's are : "+iCount);
    }
}

/*
    Decimal         Hexadecimal         Binary
        0               0               0000
        1               1               0001
        2               2               0010
        3               3               0011
        4               4               0100
        5               5               0101
        6               6               0110
        7               7               0111
        8               8               1000
        9               9               1001
        10              a               1010
        11              b               1011
        12              c               1100
        13              d               1101
        14              e               1110
        15              f               1111

    Hexademal number formation

    0011    1111    1000    0101    0011    1011    1110    0001
    3       f       8       5       3       b       e       1

    No = 0x3f853be1
*/
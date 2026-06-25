import java.util.*;

class program829
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
        
        System.out.println(iRev);
    }
}

/*
    iNo = 153                           iRev = 0    3       35      351

    iRev = iRev * 10 + iDigit




*/
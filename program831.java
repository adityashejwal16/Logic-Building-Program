import java.util.*;

class program831
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iTemp = 0, iDigit = 0, iSum = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iTemp = iNo;

        iNo = iNo * iNo;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        if(iSum == iTemp)
        {
            System.out.println(iTemp + " is Neon number");
        }
        else
        {
            System.out.println(iTemp + " is not Neon number");
        }
    }
}

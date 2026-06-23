import java.util.*;

class program806
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements in series");
        int Size = sobj.nextInt();

        long dp[] = new long[Size+1];

        dp[0] = 0;
        dp[1] = 1;

        int i = 0;

        for(i = 2; i < Size; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }

        for(i = 0; i < Size; i++)
        {
            System.out.print(dp[i] + " ");
        }

        System.out.println();
    }
}
import java.util.*;

class program807
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of cities : ");
        int N = sobj.nextInt();

        if(N <= 0)
        {
            System.out.println("Invalid input");
            return;
        }

        int Arr[][] = new int[N][7];
        int i = 0, j = 0, no = 0;

        System.out.println("Enter electicity consumption of each city : ");

        for(i = 0; i < N; i++)
        {
            System.out.println("Enter consumption of city : "+(i+1));
            for(j = 0; j < 7; j++)
            {
                no = sobj.nextInt();
                if(no < 0)
                {
                    System.out.println("Invalid input");
                    return;
                }
                Arr[i][j] = no;
            }
        }

        int Weekly[] = new int[7];
        int HighestCity = 0;
        int MaxWeekly = 0;

        int PeekDay = 0;
        int MaxDayTotal = 0;
        int Sum = 0;

        // weekly total + highest consumption
        for(i = 0; i < N; i++)
        {
            Sum = 0;
            for(j = 0; j < 7; j++)
            {
                Sum = Sum + Arr[i][j];
            }
            Weekly[i] = Sum;

            if(Sum > MaxWeekly)
            {
                MaxWeekly = Sum;
                HighestCity = i;
            }
        }

        System.out.println("Highest consumption : City "+HighestCity);
        System.out.println("Highest consumption : "+MaxWeekly);

    }
}
import java.util.*;

class program812
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows in theatre : ");
        int R = sobj.nextInt();

        System.out.println("Enter number of columns in theatre : ");
        int C = sobj.nextInt();

        if(R <= 0 || C <= 0)
        {
            System.out.println("Invalid input");
            return;
        }

        int Seats[][] = new int[R][C];
        int i =0, j = 0;

        System.out.println("Enter booking details (0/1)");
        for(i = 0; i < R; i++)
        {
            System.out.println("Enter details of Row : "+(i + 1));
            for(j = 0; j < C; j++)
            {
                Seats[i][j] = sobj.nextInt();

                if(Seats[i][j] != 0 && Seats[i][j] != 1)
                {
                    System.out.println("Invalid input");
                    return;
                }
            }
        }

        int TotalBooked = 0;
        int MaxBookedInRow = 0;
        int RowWithMax = 0;
        boolean FullRowExist = false;
        int RowBooked = 0;

        for(i = 0; i < R; i++)
        {
            RowBooked = 0;
            for(j = 0; j < C; j++)
            {
                if(Seats[i][j] == 1)
                {
                    TotalBooked++;
                }

                RowBooked = RowBooked + Seats[i][j];
            }

            if(RowBooked > MaxBookedInRow)
            {
                MaxBookedInRow = RowBooked;
                RowWithMax = i;
            }

            if(RowBooked == C)
            {
                FullRowExist = true;
            }
        }

        System.out.println("Total booked seats : "+TotalBooked);
        System.out.println("Row with maximum bookings : "+(RowWithMax+1));
        System.out.println("Full row exist : "+(FullRowExist ? "Yes" : "No"));

    }
}


//System.out.println("Number is : "+((No % 2) ? "ODD" : "EVEN"));
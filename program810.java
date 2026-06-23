import java.util.*;

class program810
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

    }
}
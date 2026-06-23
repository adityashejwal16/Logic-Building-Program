import java.util.*;

//  0   1   1   2   3   5   8   13  21  ......

class program802
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements in series");
        int Size = sobj.nextInt();

        int i = 0, First = 0, Second = 0, Next = 0;

        for(i = 1, First = 0, Second = 1; i <= Size; i++)
        {
            System.out.print(First + " ");
            Next = First + Second;

            First = Second;
            Second = Next;
        }

        System.out.println();
    }
}
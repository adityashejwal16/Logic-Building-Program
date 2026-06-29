import java.util.*;

class program856
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        // Step 0
        String str = sobj.nextLine();

        // Step 1
        str = str.trim();

        // step 2
        str = str.replaceAll("\\s+", " ");

        // Step 3
        String Arr[] = str.split(" ");

        for(int i = Arr.length-1; i >= 0 ; i--)
        {
            System.out.println(Arr[i]);
        }
    }
}
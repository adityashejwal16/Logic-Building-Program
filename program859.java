import java.util.*;

class program859
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

        int iMax = 0;

        for(int i = 0; i < Arr.length ; i++)
        {
            if(Arr[i].length() > iMax)
            {
                iMax = Arr[i].length();
            }
        }

        System.out.println("Longest word length is : "+iMax);
    }
}
import java.util.*;

class program862
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

        int iCount = 0;

        for(int i = 0; i < Arr.length ; i++)
        {
            if(Arr[i].equals("india") == true)
            {
                iCount++;
            }
        }

        System.out.println("Frequency of india word is : "+iCount);
    }
}
import java.util.*;

class program860
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
        String MaxWord = null;

        // india is my country all indians information demo hello
        // iMax : 5 -> 7 -> 11
        // Maxword : india  -> country -> information

        for(int i = 0; i < Arr.length ; i++)
        {
            if(Arr[i].length() > iMax)
            {
                iMax = Arr[i].length();
                MaxWord = Arr[i];
            }
        }

        System.out.println("Longest word length is : "+iMax);
        System.out.println("Longest word is : "+MaxWord);
    }
}
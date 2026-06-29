import java.util.*;

class program852
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");

        String str = null;

        str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");
    
        String Arr[] = str.split(" ");

        System.out.println("Number of words : "+Arr.length);
    }
}
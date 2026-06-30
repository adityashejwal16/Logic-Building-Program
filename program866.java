import java.util.*;

class program866
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        String Arr[] = str.split(" ");

        StringBuffer sb = null;

        for(int i = 0; i < Arr.length ; i++)
        {
           sb = new StringBuffer(Arr[i]);
           sb.reverse();
           System.out.print(sb+" "); 
        }

        System.out.println();
    }
}
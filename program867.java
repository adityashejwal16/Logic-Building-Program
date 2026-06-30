import java.util.*;

class program867
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
        StringBuffer finalstr = new StringBuffer();

        for(int i = 0; i < Arr.length ; i++)
        {
           sb = new StringBuffer(Arr[i]);
           sb.reverse();
           finalstr.append(sb);
        finalstr.append(" ");
        }

        System.out.println(finalstr);
    }
}
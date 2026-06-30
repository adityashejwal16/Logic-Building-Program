import java.util.*;

class program864
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        StringBuffer sb = new StringBuffer(str);
        
        System.out.println(sb);
        System.out.println(sb.length());
    }
}
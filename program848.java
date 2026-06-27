import java.util.*;

class program848
{
    public static void main(String A[])
    {
        String str = "  india   is   my  country  ";

        System.out.println(str);
        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        System.out.println(str);
    }
}

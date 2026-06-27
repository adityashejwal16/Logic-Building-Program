import java.util.*;

class program847
{
    public static void main(String A[])
    {
        String str = "  india   is   my  country  ";

        System.out.println(str);
        str = str.trim();

        str = str.replaceAll("  ", " ");

        System.out.println(str);
    }
}

import java.util.*;

class program849
{
    public static void main(String A[])
    {
        String str = "  india   is   my  country  ";

        System.out.println(str);
        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        String Arr[] = str.split(" ");

        System.out.println(Arr.length);
    }
}

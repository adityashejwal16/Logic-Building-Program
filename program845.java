import java.util.*;

class program845
{
    public static void main(String A[])
    {
        String str = "    hello    worlld    ";

        System.out.println(str);
        str = str.trim();

        str = str.replaceAll(" ", "");

        System.out.println(str);
    }
}

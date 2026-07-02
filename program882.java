/*
    0   1   2   3   4   5   6   7   8   9   .....
    a   b   c   d   e   f   g   h   i   j   .....
    97  98  99  100 101 102 103 104 105 106 .....
*/

import java.util.*;

class program882
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter second string : ");
        String str2 = sobj.nextLine();

        if(str1.length() != str2.length())
        {
            System.out.println("Strings are not anagram");
            return;
        }

        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        Arrays.sort(Arr);
        Arrays.sort(Brr);
        
        str1 = new String(Arr);
        str2 = new String(Brr);

        if(str1.equals(str2))
        {
            System.out.println("Strings are anagram");
        }
        else
        {
            System.out.println("Strings are not anagram");
        }

    }
}
/*
    0   1   2   3   4   5   6   7   8   9   .....
    a   b   c   d   e   f   g   h   i   j   .....
    97  98  99  100 101 102 103 104 105 106 .....
*/

import java.util.*;

class program879
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

        int Count1[] = new int[26];
        int Count2[] = new int[26];

        int i = 0; 

        for(i = 0; i < Arr.length; i++)
        {
            Count1[Arr[i] - 'a']++;
        }

        for(i = 0; i < Brr.length; i++)
        {
            Count2[Brr[i] - 'a']++;
        }

        boolean bFlag = true;

        for(i = 0 ; i < Count1.length; i++)
        {
            if(Count1[i] != Count2[i])
            {
                bFlag = false;
                break;
            }
        }

        if(bFlag == true)
        {
            System.out.println("Strings are anagram");
        }
        else
        {
            System.out.println("Strings are not anagram");
        }

    }
}
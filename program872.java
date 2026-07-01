/*
    0   1   2   3   4   5   6   7   8   9   .....
    a   b   c   d   e   f   g   h   i   j   .....
    97  98  99  100 101 102 103 104 105 106 .....
*/

import java.util.*;

class program872
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        int Count[] = new int[26];

        int i = 0; 

        for(i = 0; i < Arr.length; i++)
        {
            Count[Arr[i] - 'a']++;
        }

        for(i = 0; i < Count.length;i++)
        {
            if(Count[i] != 0)
            {
                System.out.println((char)((char)'a'+i) + " : "+ Count[i]);
            }
        }
    }
}
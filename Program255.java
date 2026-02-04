import java.util.*;


class StringX
{
   public String toLowerCaseX(String str)
   {
    int iCnt =0;

       char Arr[] = str.toCharArray();

       for(iCnt =0; iCnt < Arr.length; iCnt++)
       {
        if (Arr[iCnt]>= 'A' && Arr[iCnt]<='z')
        {
            Arr[iCnt] =(char)(Arr[iCnt]+32);
        }
       }

          return new String(Arr);   
    } 
}

class Program255
{
    public static void main(String A[]) 
    { 
        String sRet = null;
        
        Scanner Scanobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String sobj= Scanobj.nextLine();
        
        StringX strobj = new StringX();

        sRet=strobj.toLowerCaseX(sobj);             

        System.err.println("updeted String  : "+sobj);
    }
}
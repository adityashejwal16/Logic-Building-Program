import java.util.*;


class StringX
{
   public void Display(String str)
   {
       int iCnt =0;
       
       char Arr[] = str.toCharArray();

       for(iCnt = 0; iCnt < Arr.length; iCnt ++)
       {
         System.out.println(Arr[iCnt]);
       }
   }   
}

class Program248
{
    public static void main(String A[]) 
    { 
        int iCnt =0;

        Scanner Scanobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String sobj= Scanobj.nextLine();
        
        StringX strobj = new StringX();

        strobj.Display(sobj);
    }
}
import java.util.*;


class StringX
{
   public void Display(String str)
   {
       int iCnt =0;
       for(iCnt=0; iCnt < str.length(); iCnt++)
       {
        System.err.println(str.charAt(iCnt));
       }
   }   
}

class Program244
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
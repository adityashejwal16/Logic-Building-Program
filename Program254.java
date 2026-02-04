import java.util.*;


class StringX
{
   public String update(String str)
   {
       char Arr[] = str.toCharArray();

       Arr[0] = '_';

      String temp = new String(Arr);   //change
      
    return temp;

   } 
}

class Program254
{
    public static void main(String A[]) 
    { 
        
        
        Scanner Scanobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String sobj= Scanobj.nextLine();
        
        StringX strobj = new StringX();

        sobj=strobj.update(sobj);             // Change (Not prefarable)

        System.err.println("updeted String  : "+sobj);
    }
}
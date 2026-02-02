import java.util.*;


class Program245
{
    public static void main(String A[]) 
    { 
        int iCnt =0;

        Scanner Scanobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String sobj= Scanobj.nextLine();
        
        char Arr[] = sobj.toCharArray();

        System.out.println(sobj.length());
        System.out.println(Arr.length);

    }
}
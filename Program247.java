import java.util.*;


class Program247
{
    public static void main(String A[]) 
    { 
        int iCnt =0;

        Scanner Scanobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String sobj= Scanobj.nextLine();
        
        char Arr[] = sobj.toCharArray();
        
        for(iCnt = 0; iCnt < Arr.length; iCnt ++)
        {
            System.out.println(Arr[iCnt]);
        }
        
       
        

    }
}
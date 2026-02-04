import java.util.*;


class StringX
{
   public void CountCapital(String str)
   {
       int iCnt =0;
       int iCount = 0;
       
       char Arr[] = str.toCharArray();

       for(iCnt = 0; iCnt < Arr.length; iCnt ++)
       {
          if(Arr[iCnt]>='A' && Arr[iCnt]<= 'Z')
          {
            iCount ++;
          }
       }
      
   }   
}

class Program249
{
    public static void main(String A[]) 
    { 
        int iCnt =0;
        iRet =0;

        Scanner Scanobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String sobj= Scanobj.nextLine();
        
        StringX strobj = new StringX();

        iRet=CountCapital(sobj);

        System.err.println("Frequency of small character : "+iRet);
    }
}
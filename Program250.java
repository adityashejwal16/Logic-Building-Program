import java.util.*;


class StringX
{
   public void CountSmall(String str)
   {
       int iCnt =0;
       int iCount = 0;
       
       char Arr[] = str.toCharArray();

       for(iCnt = 0; iCnt < Arr.length; iCnt ++)
       {
          if(Arr[iCnt]>='a' && Arr[iCnt]<= 'z')
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

        iRet=CounSmall(sobj);

        System.err.println("Frequency of small character : "+iRet);
    }
}
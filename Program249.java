import java.util.*;


class StringX
{
   public void CountOccurence(String str)
   {
       int iCnt =0;
       int iCount = 0;
       
       char Arr[] = str.toCharArray();

       for(iCnt = 0; iCnt < Arr.length; iCnt ++)
       {
          if(Arr[iCnt]=='a')
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

        iRet=CountOccurence(sobj);
    }
}
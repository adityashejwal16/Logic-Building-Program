import java.io.*;
import java.util.*;

class program568
{
    public static void main(String A[]) throws Exception
    {
        boolean bRet = false;
        String FileName = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of file");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            System.out.println("File name : "+fobj.getName());
            System.out.println("File path : "+fobj.getAbsolutePath());
            System.out.println("File size : "+fobj.length());
        }
        else
        {
            System.out.println("There is no such file");
        }
        
        sobj.close();
    }
}
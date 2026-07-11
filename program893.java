import java.util.*;
import java.time.LocalDate;
import java.time.LocalDateTime;

import java.io.*;

class program893
{
    public static void main(String A[])
    {
        String Filename = "Marvellous.csv";

        try(FileWriter fwobj = new FileWriter(Filename))
        {
            fwobj.write("name,marks\n");
            fwobj.write("sagar,90\n");
            fwobj.write("amit,80\n");
            fwobj.write("pooja,97\n");
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occured");
        }

    }
}
import java.util.*;
import java.time.LocalDate;
import java.time.LocalDateTime;

import java.io.*;

class program892
{
    public static void main(String A[]) throws Exception
    {
        String Filename = "Marvellous.csv";

        FileWriter fwobj = new FileWriter(Filename);

        fwobj.write("name,marks\n");
    }
}
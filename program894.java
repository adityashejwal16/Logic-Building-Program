import java.util.*;
import java.time.LocalDate;
import java.time.LocalDateTime;

import java.io.*;

class Student
{
    private String name;
    private int marks;

    public Student(String a, int b)
    {
        this.name = a;
        this.marks = b;
    }

    public String getName()
    {
        return this.name;
    }

    public int getMarks()
    {
        return this.marks;
    }

    @Override
    public String toString()
    {
        return this.name+" : "+this.marks;
    }
}

class program894
{
    public static void main(String A[])
    {
        ArrayList <Student>database  = new ArrayList<Student>();

        Student s1 = new Student("sagar", 90);
        Student s2 = new Student("rahul", 80);
        Student s3 = new Student("pooja", 92);
        Student s4 = new Student("amit", 72);

        database.add(s1);
        database.add(s2);
        database.add(s3);
        database.add(s4);

        String Filename = "Marvellous.csv";

        try(FileWriter fwobj = new FileWriter(Filename))
        {
            fwobj.write("name,marks\n");

            for(Student s : database)
            {
                fwobj.write(s.getName() + "," +s.getMarks()+"\n");
            }
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occured");
        }
        finally
        {
            System.out.println("Data gets stored succesfully");

            database.clear();
        }
    }
}
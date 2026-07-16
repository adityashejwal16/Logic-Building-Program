import java.util.*;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.io.*;

// DONE
class StudyLog
{
    private LocalDate Date;
    private String Subject;
    private double Duration;
    private String Description;

    public StudyLog(LocalDate a, String b, double c, String d)
    {
        this.Date = a;
        this.Subject = b;
        this.Duration = c;
        this.Description = d;
    }

    public LocalDate getDate()
    {
        return this.Date;
    }

    public String getSubject()
    {
        return this.Subject;
    }

    public double getDuration()
    {
        return this.Duration;
    }

    public String getDescription()
    {
        return this.Description;
    }
    
    @Override
    public String toString()
    {
        return Date+ " | "+Subject+" | "+Duration+" | "+Description;
    }
}

class StudyTracker
{
    public ArrayList <StudyLog>Database = new ArrayList<StudyLog>();

    public void InsertLog()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("-------------------------------------------");
        System.out.println("---- Enter valid details of your study ----");
        System.out.println("-------------------------------------------");

        LocalDate Dateobj = LocalDate.now();
        
        System.out.println("Please enter the name of subject like C/C++/Java/Python");
        String sub = sobj.nextLine();

        System.out.println("Enter the time period of your study in hours");
        double dur = sobj.nextDouble();
        sobj.nextLine();

        System.out.println("Please provide the description of your study");
        String desc= sobj.nextLine();

        StudyLog studyobj = new StudyLog(Dateobj, sub, dur, desc);

        Database.add(studyobj);

        System.out.println("Study log gets stored succesfully");
        System.out.println("-------------------------------------------");
    }

    public void DisplayLog()
    {
        System.out.println("-------------------------------------------");
        System.out.println("-- Log report of Marvellous Study Tracker -");
        System.out.println("-------------------------------------------");

        for(StudyLog s : Database)
        {
            System.out.println(s);
        }

        System.out.println("-------------------------------------------");
    }
}

class program897
{
    public static void main(String A[])
    {
        StudyTracker stobj = new StudyTracker();

        stobj.InsertLog();

        stobj.DisplayLog();
    }
}
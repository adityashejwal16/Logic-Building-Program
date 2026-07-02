import java.util.*;

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

class program890
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayList <Student> aobj = new ArrayList<Student>();

        Student s1 = new Student("sagar", 90);
        Student s2 = new Student("rahul", 80);
        Student s3 = new Student("pooja", 92);
        Student s4 = new Student("amit", 72);

        aobj.add(s1);
        aobj.add(s2);
        aobj.add(s3);
        aobj.add(s4);
        
        int iMax = 0;
        Student temp = null;

        for(Student s : aobj)
        {
            if(s.getMarks() > iMax)
            {
                iMax = s.getMarks();
                temp = s;
            }
        }

        System.out.println("Highest student details : "+temp);

        aobj.clear();

        // 
    }
}
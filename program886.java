import java.util.*;

class Student
{
    public String name;
    public int marks;

    public Student(String a, int b)
    {
        this.name = a;
        this.marks = b;
    }

    public void Display()
    {
        System.out.println(name + " : "+marks);
    }

    @Override
    public String toString()
    {
        return "inside toString";
    }
}

class program886
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayList <Integer> aobj = new ArrayList<Integer>();

        Student s1 = new Student("sagar", 90);
        Student s2 = new Student("rahul", 80);
        Student s3 = new Student("pooja", 92);
        Student s4 = new Student("amit", 72);

        System.out.println(s1);
        System.out.println(s2);

        s1.Display();
        s2.Display();
    }
}
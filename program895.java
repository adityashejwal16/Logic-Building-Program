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
    
    }
}
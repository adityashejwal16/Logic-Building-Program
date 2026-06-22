import java.util.*;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Matrix(int a, int b)
    {
        this.iRow = a;
        this.iCol = b;

        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        int i = 0, j = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of matrix");

        for(i = 0; i < iRow; i++)
        {
            System.out.println("Enter the elements of row : "+(i+1));

            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    
        sobj.close();
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Elements of matrix are : ");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int Summation()
    {
        int i = 0, j = 0;
        int iSum = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }

        return iSum;
    }

    public float Average()
    {
        int iSum = 0;

        iSum = Summation();

        return (iSum / (iRow * iCol));
    }

    public int Maximum()
    {
        int i = 0, j = 0;
        int iMax = 0;

        iMax = Arr[0][0];

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
        }

        return iMax;
    }

    public int Minimum()
    {
        int i = 0, j = 0;
        int iMin = 0;

        iMin = Arr[0][0];

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] < iMin)
                {
                    iMin = Arr[i][j];
                }
            }
        }

        return iMin;
    }
}

class program794
{
    public static void main(String A[])
    {
        Matrix mobj = new Matrix(4,4);

        mobj.Accept();
        mobj.Display();

        System.out.println("Summation of all elements : "+mobj.Summation());
        
        System.out.println("Average is : "+mobj.Average());

        System.out.println("Largest element is : "+mobj.Maximum());
        
        System.out.println("Smallest element is : "+mobj.Minimum());

    }
}
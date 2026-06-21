#include<iostream>
using namespace std;

#define INC_ORDER 1
#define DEC_ORDER 2

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        bool Sorted;

    ArrayX(int no);
    ~ArrayX();

    void Accept();
    void Display();
    
    bool CheckSorted();

    void BubbleSort();
    void BubbleSortEfficient();
    void BubbleSortEfficientX(int iOption);

    void SelectionSort();

    void InsertionSort();
};

ArrayX :: ArrayX(int no)
{
    cout<<"Inside constructor\n";
    iSize = no;
    Arr = new int[iSize];
    Sorted = true;
}

ArrayX :: ~ArrayX()
{
    cout<<"Inside destructor\n";
    delete [] Arr;
}

void ArrayX :: Accept()
{
    int iCnt = 0;

    cout<<"Enter the elements : \n";
    cin>>Arr[iCnt];
    
    // iSize = 5

    // 0    1   2   3   4
    // 11   14  17  21  26

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];

        if(Arr[iCnt-1] > Arr[iCnt])
        {
            Sorted = false;
        }
    }

    //Sorted = CheckSorted();
}

void ArrayX :: Display()
{
    int iCnt = 0;

    cout<<"Elements of the array are : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

bool ArrayX :: CheckSorted()
{
    int i = 0;
    bool bFlag = true;

    for(i = 0; i < iSize-1; i++)
    {
        if(Arr[i] > Arr[i+1])
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;
}

void ArrayX :: BubbleSort()
{
    int i = 0, j = 0;
    int temp = 0;
    int Pass = 0;
    int Time = 0;

    if(Sorted == true)  // Important filter
    {
        return;
    }

    Time = 1;

    for(i = 0, Pass = 1; i < iSize - 1; i++, Pass++)          // Outer
    {
        for(j = 0; j < iSize - 1 - i; j++, Time++)  // Inner
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
        
        cout<<"\nData after Pass : "<<i + 1<<"\n";
        Display();
    }

    cout<<"Number of passess for bubble sort : "<<Pass<<"\n";
    cout<<"Total number of iterations : "<<Time<<"\n";

    Sorted = true;
}

// 21   15  18  16  11

void ArrayX :: BubbleSortEfficient()
{
    int i = 0, j = 0;
    int temp = 0;

    bool bFlag = false;

    /*if(Sorted == true)  // Important filter
    {
        return;
    }*/

    bFlag = true;
    
    // 11   111     21      51      101
    for(i = 0; (i < iSize - 1) && (bFlag == true); i++)          // Outer
    {
        bFlag = false;

        for(j = 0; j < iSize - 1 - i; j++)  // Inner
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;

                bFlag = true;
            }
        }
        
        cout<<"\nData after Pass : "<<i + 1<<"\n";
        Display();
    }

    cout<<"Number of passess for bubble sort : "<<i<<"\n";

    Sorted = true;
}

/*
    Pass 1 :    0   1   2   3    
    Pass 2 :    0   1   2
    Pass 3 :    0   1
    Pass 4 :    0


*/

// 1 : Increasing
// 2 : Decreasing
void ArrayX :: BubbleSortEfficientX(int iOption = INC_ORDER)
{
    int i = 0, j = 0;
    int temp = 0;

    bool bFlag = false;

    if(iOption < INC_ORDER || iOption > DEC_ORDER)
    {
        cout<<"Invalid option for soring\n";
        
        cout<<"1 : Increasing\n";
        cout<<"2 : Decreasing\n";

        return;
    }

    /*if(Sorted == true)  // Important filter
    {
        return;
    }*/

    bFlag = true;
    
    if(iOption == INC_ORDER)
    {
        // 11   111     21      51      101
        for(i = 0; (i < iSize - 1) && (bFlag == true); i++)          // Outer
        {
            bFlag = false;

            for(j = 0; j < iSize - 1 - i; j++)  // Inner
            {
                    if(Arr[j] > Arr[j + 1])
                    {
                        temp = Arr[j];
                        Arr[j] = Arr[j + 1];
                        Arr[j + 1] = temp;

                        bFlag = true;
                    }
            }

            cout<<"\nData after Pass : "<<i + 1<<"\n";
            Display();
        }
    } // End of if ioption == 1
    else if(iOption == DEC_ORDER)
    {
        // 11   111     21      51      101
        for(i = 0; (i < iSize - 1) && (bFlag == true); i++)          // Outer
        {
            bFlag = false;

            for(j = 0; j < iSize - 1 - i; j++)  // Inner
            {
                    if(Arr[j] < Arr[j + 1])
                    {
                        temp = Arr[j];
                        Arr[j] = Arr[j + 1];
                        Arr[j + 1] = temp;

                        bFlag = true;
                    }
            }

            cout<<"\nData after Pass : "<<i + 1<<"\n";
            Display();
        }        
    } // End of else if

    cout<<"Number of passess for bubble sort : "<<i<<"\n";

    Sorted = true;
}

/*
    Pass 1 : 1  2   3   4
    Pass 2 : 2  3   4   
    Pass 3 : 3  4
    Pass 4 : 4
*/

void ArrayX :: SelectionSort()
{
    int i = 0, j = 0, temp = 0;
    int min_index = 0;

    for(i = 0; i < iSize-1; i++)
    {
        min_index = i;

        for(j = i + 1; j < iSize; j++)
        {
            if(Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }

        if(i != min_index)
        {
            temp = Arr[i];
            Arr[i] = Arr[min_index];
            Arr[min_index] = temp;
        }
    }
}

void ArrayX :: InsertionSort()
{
    int i =0, j = 0;
    int selected = 0;

    for(i = 1; i < iSize; i++)
    {
        for(j = i-1, selected = Arr[i]; (j >= 0) && (Arr[j] > selected); j--)
        {
            Arr[j+1] = Arr[j];
        }

        Arr[j+1] = selected;
    }
}

int main()
{   
    int iValue = 0;
    
    cout<<"Enter the number of elements : \n";
    cin>>iValue;

    ArrayX aobj(iValue);

    aobj.Accept();

    cout<<"Data before sorting\n";

    aobj.Display();

    // 1 : Increasing
    // 2 : Decresing
    //aobj.BubbleSortEfficientX(DEC_ORDER);

    // aobj.SelectionSort();
    
    aobj.InsertionSort();
    
    cout<<"Data after sorting\n";
    
    aobj.Display();
    
    return 0;
}
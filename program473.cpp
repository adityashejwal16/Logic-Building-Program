#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            cout<<"Inside constructor\n";
            iSize = no;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside destructor\n";
            delete [] Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the elements : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of the array are : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }
};

int main()
{   
    int iValue = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iValue;

    // Step 1 : Allocate the memory
    ArrayX *aobj = new ArrayX(iValue);
    
    // Step 2 : Use the memory
    aobj->Accept();
    aobj->Display();
    
    // Step 3 : Deallocate memory
    delete aobj;

    return 0;
}
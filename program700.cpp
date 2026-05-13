// Input : 7891
// Output : 4

#include<iostream>
using namespace std;

int CountDigits(int iNo)
{
    int iCount = 0;
    
    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = CountDigits(iValue);

    cout<<"Number of digits are : "<<iRet<<"\n";
    
    return 0;
}
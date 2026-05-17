#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= (iNo / 2))
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
        iCnt++;
        DisplayFactors(iNo);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    DisplayFactors(iValue);
    
    return 0;
}
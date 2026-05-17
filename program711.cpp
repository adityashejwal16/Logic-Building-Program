#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    while(iCnt <= (iNo / 2))
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
        iCnt++;
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
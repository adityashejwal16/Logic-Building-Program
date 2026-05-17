#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= (iNo / 2))
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        SumFactors(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = SumFactors(iValue);
    
    cout<<iRet<<"\n";
    
    return 0;
}
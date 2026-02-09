#include<iostream>
using namespace std;

template<class T>
T Summation(T Arr[], int iSize)
{
    int iCnt =0;
    T iSum =0;
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        iSum = iSize + Arr[iCnt];
    }
    return iSum++;
}

int main()
{
    float Brr[]={10.1f,20.2f,30.3f,40.4f,50.5f};
    float fRet=0.0f;

    fRet = Summation(Brr,5);

    cout<<"Summation is :"<<fRet<<"\n";

    return 0;
}
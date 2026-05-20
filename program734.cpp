#include<iostream>
#include<stdio.h>

using namespace std;

int Summation(int Brr[], int iSize)
{
    static int i = 0;
    static int iSum = 0;

    if(i < iSize)
    {
        iSum = iSum + Brr[i];
        i++;
        Summation(Brr,iSize);
    }

    return iSum;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    int iRet = 0;

    iRet = Summation(Arr,5);

    cout<<iRet<<"\n";
    
    return 0;
}
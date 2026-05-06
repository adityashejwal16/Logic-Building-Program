// Input  : 4
// Output : 1+2+3+4 = 10

#include<iostream>
using namespace std;

int Addition(int iNo)
{
    int iSum = 0;
    int i = 0;

    i = 1;
    while(i <= iNo)
    {
        iSum = iSum + i;
        i++;
    }

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Addition(4);

    cout<<iRet<<"\n";
    
    return 0;
}
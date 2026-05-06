// Input  : 4
// Output : 4+3+2+1 = 10

#include<iostream>
using namespace std;

int Addition(int iNo)
{
    static int iSum = 0;
    static int i = 1;

    if(i <= iNo)
    {
        iSum = iSum + i;
        i++;
        Addition(iNo);
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
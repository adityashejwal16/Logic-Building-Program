// Input : 5
// Output : 5   4   3   2   1

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = iNo;

    while(iCnt >= 1)
    {
        cout<<iCnt<<"\t";
        iCnt--;
    }

    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Display(iValue);

    return 0;
}
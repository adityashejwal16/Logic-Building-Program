// Input 4
// Output : 4   3   2   1

#include<iostream>
using namespace std;

void Display(int iNo)
{
    while(iNo >= 1)
    {
        cout<<iNo<<"\n";
        iNo--;
    }
}

int main()
{
    Display(3);

    return 0;
}
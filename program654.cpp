// Input 4
// Output : 4   3   2   1

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int i = 0;

    i = iNo;

    while(i >= 1)
    {
        cout<<i<<"\n";
        i--;
    }
}

int main()
{
    Display(3);

    return 0;
}
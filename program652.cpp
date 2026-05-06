#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;
    
    if(i <= iNo)
    {
        cout<<i<<"\n";
        i++;
        Display(iNo);
    }
}

int main()
{
    Display(6);

    return 0;
}
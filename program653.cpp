#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;
    
    if(i <= iNo)
    {
        i++;
        Display(iNo);
        cout<<i<<"\n";
    }
}

int main()
{
    Display(3);

    return 0;
}
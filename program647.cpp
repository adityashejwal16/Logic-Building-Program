#include<iostream>
using namespace std;

void Display()
{
    static int i = 1;
    cout<<i<<"\n";
    i++;
    Display();
}

int main()
{
    Display();

    return 0;
}
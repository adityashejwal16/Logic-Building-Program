#include<iostream>
using namespace std;

void Display()
{
    auto i = 1;
    cout<<i<<"\n";
    i++;
    Display();
}

int main()
{
    Display();

    return 0;
}
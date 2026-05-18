#include<iostream>
#include<stdio.h>

using namespace std;

void Display(int Brr[], int iSize)
{
    int i = 0;
    
    for(i = 0; i < iSize; i++)
    {
        cout<<Brr[i]<<"\n";
    }
}

int main()
{
    int Arr[] = {10,20,30,40,50};

    Display(Arr,5);

    return 0;
}
#include<iostream>
#include<stdio.h>

using namespace std;

void Display(int Brr[], int iSize)
{
    int i = 0;
    
    while(i < iSize)
    {
        cout<<Brr[i]<<"\n";
        i++;
    }
}

int main()
{
    int Arr[] = {10,20,30,40,50};

    Display(Arr,5);

    return 0;
}
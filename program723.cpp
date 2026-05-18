#include<iostream>
#include<stdio.h>

using namespace std;

void Display(int Brr[], int iSize)
{
    static int i = 0;
    
    if(i < iSize)
    {
        cout<<Brr[i]<<"\n";
        i++;
        Display(Brr,iSize);
    }
}

int main()
{
    int Arr[] = {10,20,30,40,50};

    Display(Arr,5);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

void Swap(int *p, int *q)
{
    int temp=0;

    temp = *p;
    *p = *q
    *q=temp;
}


int main()
{
    int iValue1 = 11;
    int iValue2 = 21;

    printf("Before swap : %d %d\n",iValue,iValue);
    return 0;
}
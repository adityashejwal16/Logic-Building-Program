#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("%s\n",Arr);

    return 0;
}
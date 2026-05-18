#include<iostream>
#include<stdio.h>

using namespace std;

void strdisplay(char *str)
{
    while(*str != '\0')
    {
        cout<<*str<<"\n";
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strdisplay(Arr);

    return 0;
}
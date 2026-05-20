#include<iostream>
#include<stdio.h>

using namespace std;

void strdisplay(char *str)
{
    if(*str != '\0')
    {
        cout<<str<<"\n";
        strdisplay(str+1);
        cout<<str<<"\n";
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
// Hello'\0'


#include<iostream>
#include<stdio.h>

using namespace std;

void strdisplay(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        str++;
        iCount++;
    }

    str--;
    
    while(iCount >= 0)
    {
        cout<<*str<<"\n";
        str--;
        iCount--;
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
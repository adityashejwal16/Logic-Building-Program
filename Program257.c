#include<stdio.h>

void strcopy(char *src, char *dest)
{
    int iCnt =0;
    while(*src != '\0')
    {
        *dest=*src;
        *src ++;
        *dest ++;
    }
    
}

int main()
{
    char Arr[50] ={'\0'};
    char Brr[50] ={'\0'};

    printf("Enter String \n");
    scanf("[^'\n']s",Arr);

    strcopyX(Arr,Brr);
    
    printf("Copied string is :%s",Brr);
    return 0;
}
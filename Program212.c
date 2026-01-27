#include<stdio.h>

int main()
{
    char Name[50]={'\0'};

    printf("Enter your Name : \n");
    scanf("%s",Name);
    
    printf("Hello :%s\n",Name);
    
    return 0;
}
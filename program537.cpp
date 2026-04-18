#include<stdio.h>

int main()
{
    char str[80];
    char Command[4][20];

    int iRet = 0;
    int No1 = 0, No2 = 0;

    printf("Enter 2 numbers : \n");

    scanf("%d%d",&No1,&No2);

    printf("First number : %d\n",No1);
    printf("Second number : %d\n",No2);
    
    return 0;
}
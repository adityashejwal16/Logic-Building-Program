////////////////////////////////////////////////////////
//
///REQUIRED HEARDER FILE
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
// Auther           Aditya Dipak Shejwal
// Date  :          09/10/2025
///////////////////////////////////////////////////////
int main()
{
    int i = 0, j = 0, ans=0;

    printf("Enter first number:\n");
    scanf("%d",&i);

    printf("Enter secound number:\n");
    scanf("%d",&j);


    ans=i+j;   // business logic

    printf("Addition is: %d\n",ans);

    return 0;
}
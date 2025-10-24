#include<stdio.h>


int AdditionTwoNumbers(int iNo1, int iNo2)
{
    int isum = 0;
    isum = iNo1 + iNo2;          //business logic
    return isum;
}

int main()
{
    int iValue1=0, iValue2= 0, iRet =0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter secound number:\n");
    scanf("%d",&iValue2);


    iRet=AdditionTwoNumbers(iValue1,iValue2);


    printf("Addition is: %d\n",iRet);

    return 0;
}
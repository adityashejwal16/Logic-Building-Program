/*
 START
      Accept no and store as no
      Divide no by 2
      if the remainder is 0
      then display as Even 
      OTHERWISE
      Display as odd
  STOP
*/
#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem=0;

    iRem = iNo % 2;
    if(iRem == 0)
    {
        printf("it is even number..\n");
    }
    else
    {
        printf("it is odd number..\n");
    }

}

int main()
{
    int iValue=0;

    printf("Enter number :");
    scanf("%d", &iValue);

  CheckEvenOdd(iValue);

    return 0;
}
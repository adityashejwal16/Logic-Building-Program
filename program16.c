///////////////////////////////////////////////////////////////////////////////
//
//
//  Required Header file
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                     // For Input output
#include<stdbool.h>                   // for bool datatype
//////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description :   it is used to check even or odd
// Input :         Integer
// Output :        Boolean
// Author :        Aditya Shejwal
// Date :          10/10/2025
//
//
/////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem=0;

    iRem = iNo % 2;
    if(iRem == 0)
    { return true; }
    else
    { return false;}

}

/////////////////////////////////////////////////////////
//
// Entry #include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    return (( iNo % 2)==0);
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number :");
    scanf("%d", &iValue);

  bRet = CheckEvenOdd(iValue);
  
  if(bRet==true)
  {
    printf("%d is  Even number\n",iValue);
  }
  else
  {
    printf("%d is  odd number\n",iValue);
  }
    return 0;
}#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    return (( iNo % 2)==0);
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number :");
    scanf("%d", &iValue);

  bRet = CheckEvenOdd(iValue);
  
  if(bRet==true)
  {
    printf("%d is  Even number\n",iValue);
  }
  else
  {
    printf("%d is  odd number\n",iValue);
  }
    return 0;
}
//
//
//////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number :");
    scanf("%d", &iValue);

  bRet = CheckEvenOdd(iValue);
  
  if(bRet==true)
  {  printf("%d is  Even number\n",iValue); }
  else
  {  printf("%d is  odd number\n",iValue);  }
    return 0;
}
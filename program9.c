/* 
  step 1 : understand the problem statement
  step 1 : write the algoritham
  step 3 : Decide the programming language
  step 4 : write the program
  step 5 : test the program

/*
       ALGORITHAM
   START

   acept firts number no1
   acept secound number no2
   if the input is negative then convert it into positive
   perform Addition off no1&no2
   Display the Addition on Screen

   STOP


*/


#include<stdio.h>


float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fsum = 0.0f;

    // updator
    if(fNo1 < 0.0f)
    {
        fNo1= -fNo1;
    }
    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }


    fsum = fNo1 + fNo2;          //business logic
    return fsum;
}

int main()
{
    float fValue1=0, fValue2= 0, fRet =0;

    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter secound number:\n");
    scanf("%f",&fValue2);


    fRet=AdditionTwoNumbers(fValue1,fValue2);


    printf("Addition is: %f\n",fRet);

    return 0;
}
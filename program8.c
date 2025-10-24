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
   acept secound number no1
   perform Addition off no1&no2
   Display the Addition on Screen

   STOP


*/


#include<stdio.h>


float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fsum = 0.0f;
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
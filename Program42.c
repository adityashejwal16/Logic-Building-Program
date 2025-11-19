// 1 2 3 4 5 

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
   {
    if((iCnt % 2)==0)
    {
    printf("%d\t",iCnt);
    }
   }
    printf("\n");

}

// Time Complexicities : O(N)

int main()
{
    int iValue =0;
    printf("Please enter frequency : \n");
    scanf("%d",&iValue);
    Display(iValue);


    return 0;
}
#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int FrequencyCalculate(int Arr[], int iSize, int iNo)
{
   int iCnt = 0, int iCount= 0;
   for(iCnt =0; iCnt < iSize; iCnt++)
   {
    if(Arr[iCnt]==iNo)
    {
        iCount++;
    }
   }
   return iCount;
}

int main()
{
    int iLength = 0, iCnt =0, iRet =0, iValue= 0;
   IPTR iPtr = NULL;

    printf("Enter the number of element :\n");
    scanf("%d",&iLength);

    //Step : 1 Allocate the memory
     iPtr = (IPTR)malloc(iLength *sizeof(int));

     if(NULL==iPtr)
     {
        printf("unable to the alocate the memory\n ");
        return -1;
    }
     printf("Enter the values : \n");

     for(iCnt = 0; iCnt < iLength; iCnt++)
     {
        scanf("%d",&iPtr[iCnt]);
     }
     printf("Enter the number to calculate frequency : \n");
     scanf("%d", iValue);

     // Step 2 : use the memory

     iRet = FrequencyCalculate(iPtr,iLength,iLength);
     printf("Frequency of %d is : %d\n",iRet);

    // Step: 3 free the memory

    free(iPtr);
    return 0;
}
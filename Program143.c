#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

// < 0 (N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
   int iCnt = 0;
   bool bFlag = false;

   for(iCnt =0; iCnt < iSize; iCnt++)
   {
    if(Arr[iCnt]==iNo)
    {
       bFlag = true;
        break;
    }
   }
   return bFlag; 
   
   
}

int main()
{
    int iLength = 0, iCnt =0, iValue= 0;
    bool bRet = false;
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
     printf("Enter the number to search frequency : \n");
     scanf("%d", iValue);

     // Step 2 : use the memory

     bRet = LinearSearch(iPtr,iLength,iLength);
     if(bRet == true)
     {
        printf("%d is present in the data \n", iValue);

     }
     else
     {
       printf("%d is not present in the data \n", iValue);   
     }

    // Step: 3 free the memory

    free(iPtr);
    return 0;
}
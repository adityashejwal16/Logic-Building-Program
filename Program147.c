#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;

int Manimum(int Arr[], int iSize)
{
    int iCnt =0, iMin =0;  
    iMin = Arr[0]; //important
    for(iMin = Arr[iCnt], iCnt =0; iCnt < iSize; iCnt++)
    {
        if(Arr [iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iLength = 0, iCnt =0, iRet =0;
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
     

     // Step 2 : use the memory

     iRet = Manimum(iPtr,iLength);

     printf("Manimum number is : %d",iRet);
     
    // Step: 3 free the memory

    free(iPtr);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;

int Maximum(int Arr[], int iSize)
{
    int iCnt =0, iMax =0;  
    iMax = Arr[0]; //important
    for(iMax = Arr[iCnt], iCnt =0; iCnt < iSize; iCnt++)
    {
        if(Arr [iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

     iRet = Maximum(iPtr,iLength);

     printf("Maximum number is : %d",iRet);
     
    // Step: 3 free the memory

    free(iPtr);
    return 0;
}
#include<stdio.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{

  int iCnt=0;

  if(iNo<0)
 {
    {
        iNo= -iNo;
    }
    
    for(iCnt=2; iCnt<= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt )== 0)
        {
            break;                    //Otimizatiojn
        }
    }
     
 }
    if(iCnt > (iNo/2))             // no factor
    {
        return true;
    }
    else
    {
        return false;            // Atleast 1 factor
    }
}

int main()
{
    int iValue=0;
    bool bRet = false;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number\n", iValue);

    }
    else
    {
         printf("%d is not a prime number\n", iValue);

    }

    
    return 0;
}


// time complexcitie " for prime - N/2"
// time complexcity : for non prime - eithe 1 or 0
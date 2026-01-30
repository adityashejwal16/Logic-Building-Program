#include<stdio.h>

void CountAll(char str[])
{
    int iCountSmall = 0;
    int iCountCapital = 0;

    while(*str !='\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {                                        
            iCountCapital++;                          // Not work this all output
        }   
        else
        {
           iCountSmall ++; 
        }
        
        str++;
    }
      printf("Number of small character : %d\n",iCountSmall);
      printf("Number of Capital character : %d\n",iCountCapital);
}

int main()
{
    char Arr[50]={'\0'};
    
    

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

   
   
     CountAll(Arr);
     
    return 0;
}
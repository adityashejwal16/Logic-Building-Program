#include<stdio.h>

int CountSmall(char str[])
{
    int iCount = 0;

    while(*str !='\0')
    {
        if(((*str >= 97) && (*str <= 127)))   // ASCII VALUE IN THIS CODE
        
        {
           iCount ++;
        }
        
        str++;
    }
      return iCount;
}

int main()
{
    char Arr[50]={'\0'};
    int iRet=0;
    

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

   
   
     iRet=CountSmall(Arr);
     
     printf("number of small character are : %d\n",iRet);
     
    return 0;
}
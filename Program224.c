#include<stdio.h>

int CountOccurence(char str[], char ch)
{
    int iCount = 0;

    while(*str !='\0')
    {
        if(*str == ch)
        
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
    char cValue ='\0';

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character : \n");
    scanf("%c",&cValue);             // issue

    
     iRet=CountOccurence(Arr,cValue);
     
     printf("numbers of Occurences are : %d\n",iRet);
     
    return 0;
}
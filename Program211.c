#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] ={'H','e','l','l','o','\0'};

    printf("%s\n",Arr);       // Hello
    printf("%ld",sizeof(Arr));  // 6
    printf("%d",strlen(Arr));   // 5

    return 0;
}
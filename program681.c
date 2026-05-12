#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int iRet = 0;

    iRet = fork();

    if(iRet == 0)
    {
        printf("Child process is running with PID : %d\n",getpid());
    }
    else
    {
        printf("Parent prcoess is running with PID : %d\n",getpid());
        printf("PID of child is : %d\n",iRet);
    }

    return 0;
}
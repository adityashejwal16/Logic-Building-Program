#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("Inside myexe process with PID : %d\n",getpid());

	while(1)
	{}
	
	return 0;
}

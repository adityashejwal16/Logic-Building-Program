#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	printf("Home directory : %s\n",getenv("HOME"));
	printf("Shell used : %s\n",getenv("SHELL"));
	
	return 0;
}



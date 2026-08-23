#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	setenv("LANGUAGE","C Programming",1);
	
	printf("Language is : %s\n",getenv("LANGUAGE"));
	
	return 0;
}



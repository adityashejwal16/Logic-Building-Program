#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[], char *envp[])
{
	printf("List of enviornment variables are : \n");
	
	int i = 0;
	
	for(i = 0; envp[i] != NULL; i++)
	{
		printf("%s\n",envp[i]);
	}

	return 0;
}



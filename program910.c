#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	FILE *fp = NULL;
	char buffer[256];
	
	fp = fopen("/proc/meminfo","r");
	
	if(fp == NULL)
	{
		printf("Unable to open file\n");
		return -1;
	}	

	printf("----------------------------------------------\n");	
	printf("-------- Marvellous Memory Scanner -----------\n");
	printf("----------------------------------------------\n");
	
	while(fgets(buffer,sizeof(buffer), fp) != NULL)
	{
		printf("%s\n",buffer);
	}
	
	printf("----------------------------------------------\n");
	
	fclose(fp);
	
	return 0;
}

















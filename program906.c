#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

// ./myexe 11 21

int main(int argc, char *argv[])
{
	int Ans = 0;
	
	if(argc != 3)
	{
		printf("Invalid number of arguments\n");
		return -1;
	}	
	
	Ans = atoi(argv[1]) + atoi(argv[2]);
	
	printf("Addition is : %d\n",Ans);
	
	return 0;
}











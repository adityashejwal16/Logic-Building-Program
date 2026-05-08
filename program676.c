#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of commandline arguments are : %d\n",argc);

    if(argc != 5)
    {
        printf("Unable to proceed as invalid number of argumemnts\n");
        
        printf("Please provide : \n");
        printf("IP address\nPort number\nTargated file name\nNew file name\n");
        
        return -1;
    }

    printf("Executable name : %s\n",argv[0]);
    printf("IP Address : %s\n",argv[1]);
    printf("Port number : %s\n",argv[2]);
    printf("Targated file : %s\n",argv[3]);
    printf("New file name : %s\n",argv[4]);

    return 0;
}
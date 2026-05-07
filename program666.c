// Server Code

#include<stdio.h>
#include<sys/socket.h>

int main()
{
    int ServerSocket = 0;

    ServerSocket = socket(AF_INET, SOCK_STREAM, 0);

    if(ServerSocket < 0)
    {
        printf("Unable to create socket\n");
        return -1;
    }

    printf("Socket gets created succesfully with fd : %d\n",ServerSocket);
    
    return 0;
}
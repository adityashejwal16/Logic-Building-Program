// Server Code

#include<stdio.h>           // printf, scanf
#include<stdlib.h>          // malloc, free
#include<string.h>          // memset, memcmp

#include<unistd.h>          // close, write, read
#include<fcntl.h>           // creat, unlink

#include<sys/socket.h>      // socket, bind, listen, accept, connect
#include<netinet/in.h>      // sockaddr_in, htons

/*
struct sockaddr 
{
    sa_family_t sa_family;
    char sa_data[14];
};
*/

int main()
{
    int ServerSocket = 0;
    int iRet = 0;
    int Port = 11000;

    struct sockaddr_in ServerAddr;

    // Step 1 : Create TCP socket
    ServerSocket = socket(AF_INET, SOCK_STREAM, 0);

    if(ServerSocket < 0)
    {
        printf("Unable to create socket\n");
        return -1;
    }

    printf("Socket gets created succesfully with fd : %d\n",ServerSocket);
    
    // Step 2 : Attach the socket to IP address & port number

    // Set memory with 0
    memset(&ServerAddr, 0, sizeof(ServerAddr));

    ServerAddr.sin_family = AF_INET;
    ServerAddr.sin_addr.s_addr = INADDR_ANY;
    ServerAddr.sin_port = htons(Port);

    iRet = bind(ServerSocket, (struct sockaddr*) &ServerAddr, sizeof(ServerAddr));

    if(iRet == -1)
    {
        printf("Bind system call fail\n");
        close(ServerSocket);
        return -1;
    }

    printf("Bind operation with socket is suucesful\n");

    // Step 3 : Mark the socket as a active socket
    iRet = listen(ServerSocket, 11);

    if(iRet == -1)
    {
        printf("Unable to convert socket in listen mode\n");
        return -1;
    }

    printf("Server is live at port %d\n",Port);

    return 0;
}
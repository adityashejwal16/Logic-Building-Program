// Client Code

#include<stdio.h>           // printf, scanf
#include<stdlib.h>          // malloc, free
#include<string.h>          // memset, memcmp

#include<unistd.h>          // close, write, read
#include<fcntl.h>           // creat, unlink

#include<sys/socket.h>      // socket, bind, listen, accept, connect
#include<netinet/in.h>      // sockaddr_in, htons

int main()
{
    int ServerSocketFD = 0;

    // Step 1 : Create TCP socket
    ServerSocketFD = socket(AF_INET, SOCK_STREAM, 0);

    if(ServerSocketFD < 0)
    {
        printf("Unable to create socket\n");
        return -1;
    }

    printf("Socket gets created succesfully with fd : %d\n",ServerSocketFD);

    return 0;
}
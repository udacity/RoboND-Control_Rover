#include <iostream>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;
int server,client;
char buffer[1024];

void TCPConnect()
{
    int portNum = 1500;
    bool isExit = false;
    int bufsize = 1024;
    
    struct sockaddr_in server_addr;
    socklen_t size;
  
    client = socket(AF_INET, SOCK_STREAM, 0);

    if (client < 0) 
    {
        cout << "\nError establishing socket..." << endl;
        exit(1);
    }

    cout << "\n=> Socket server has been created..." << endl;
    
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = htons(INADDR_ANY);
    server_addr.sin_port = htons(portNum);
 
    if ((bind(client, (struct sockaddr*)&server_addr,sizeof(server_addr))) < 0) 
    {
        cout << "=> Error binding connection, the socket has already been established..." << endl;
        exit(0);
    }
  
    size = sizeof(server_addr);
    cout << "=> Looking for clients..." << endl;

    listen(client, 1);

    int clientCount = 1;
    server = accept(client,(struct sockaddr *)&server_addr,&size);
}
    
void ServerSend(const char* msg)    
{ 
 	strcpy(buffer, msg);
        send(server, buffer, strlen(buffer), 0);
	recv(client, buffer, 1, 0);	
	cout << "received_data= " << buffer << endl;	
}
    




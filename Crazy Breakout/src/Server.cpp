/*
 * Server.cpp
 *
 *  Created on: 21 de feb. de 2016
 *      Author: dilan
 */

#include "Server.h"
#include <stdio.h>
#include<string.h>    //strlen
#include<stdlib.h>    //strlen
#include <sys/types.h>
#include <iostream>
#include<sys/socket.h>
#include <netinet/in.h>
#include<arpa/inet.h> //inet_addr
#include<unistd.h>    //write
#include<pthread.h> //for threading , link with lpthread

using namespace std;

int main()
{
	int client, server;
	int portNum=8080;
	bool isExit = false;
	int bufsize = 256;
	char buffer[bufsize];

	struct sockaddr_in server_addr;
	socklen_t size;

	//Inicializar Socket
	client = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (client<0)
	{
		cout << "Error estableciendo conexión." << endl;
		exit(1);
	}
	cout << "Conexión del Socket Server creada..." << endl;

	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = INADDR_ANY;
	server_addr.sin_port = htons(portNum);

	memset(&server_addr.sin_zero,0,sizeof(server_addr.sin_zero));


	//Binding Socket ( asignarle un nombre y dirección)

	if (bind(client, (struct sockaddr*)&server_addr, sizeof(server_addr))<0)
	{
		cout << "Error binding socket..." << endl;
		exit(1);
	}

	size = sizeof(server_addr);
	cout << "Buscando clientes..." << endl;

	//Listening socket
	listen(client , 5);

	//Aceptar clientes
	server = accept(client, (struct sockaddr*)&server_addr, &size);

	if ( server < 0)
	{
		cout << "Error al aceptar el cliente..." << endl;
		exit(1);
	}

	while (server>0)
	{
		strcpy(buffer, "Servidor conectado...\n");

		send(server, buffer, sizeof(buffer), 0);
		cout << "Conectado con el cliente..." << endl;
		cout << "Enter # to end the connection" << endl;
		recv(server, buffer, bufsize, 0);
		cout << buffer << " ";
	}
	close(client);
	return 0;
}

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
	int bufsize = 1024;
	char buffer[bufsize];

	struct sockaddr_in server_addr;
	socklen_t size;

	//Inicializar Socket
	client = socket(AF_INET, SOCK_STREAM, 0);

	if (client<0)
	{
		cout << "Error estableciendo conexión." << endl;
		exit(1);
	}
	cout << "Conexión del Socket Server creada..." << endl;

	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = htons(INADDR_ANY);
	server_addr.sin_port = htons(portNum);

	//Binding Socket ( asignarle un nombre y dirección)

	if (bind(client, (struct sockaddr*)&server_addr, sizeof(server_addr))<0)
	{
		cout << "Error binding socket..." << endl;
		exit(1);
	}

	size = sizeof(server_addr);
	cout << "Buscando clientes..." << endl;

	//Listening socket
	listen(client , 1);

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
		send(server, buffer, bufsize, 0);

		cout << "Conectado con el cliente..." << endl;
		cout << "Enter # to end the connection" << endl;

		cout <<"Cliente: ";

		do {
			recv(server, buffer, bufsize, 0);
			cout << "Buffer" << " ";
			if (*buffer == '#'){
				*buffer = '*';
				isExit = true;
			}

		} while (*buffer != '*');
		do {
			cout << "\nServidor: ";
			do {
				cin >> buffer;
				send(server, buffer, bufsize, 0);
				if (*buffer == '#'){
					send(server, buffer, bufsize, 0);
					*buffer = '#';
					isExit = true;
				}
			} while (*buffer != '*');

			cout << "Cliente: ";
			do {
				recv(server, buffer, bufsize, 0);
				cout << buffer << " ";
				if (*buffer == '#'){
					*buffer = '*';
					isExit = true;
				}
			} while (*buffer != '*');
		} while (isExit);

		cout << "Conexión terminada... " << endl;
		isExit = false;
		exit(1);
	}
	close(client);
	return 0;
}

// Gerond'IF.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Patient.h"
#include <fstream>
#include "Reseau.h"
#include "Constantes.h"

using namespace std;

int main() {
	ListenerSocket servSock;
	cout << "Test du Serveur !!" << endl;
	servSock.Create(8080);
	if(servSock.Listen()) {
		cout << "Server listening ..." << endl;
	}
	else {
		cout << "Failed to listen." << endl;
	}
}


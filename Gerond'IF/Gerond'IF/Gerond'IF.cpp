// Gerond'IF.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Patient.h"
#include <fstream>

using namespace std;

int main() {
	Patient p("Turpin", "Laurent", "lt@insa.fr");
	cout << p.getNom() << " " << p.getPrenom() << " " << p.getEmail() << endl;

	ifstream file("./Test.txt");
	if(file) {
		p.chargerGenome(file);

		set<string> genome = p.getGenome();

		for(string s : genome) {
			cout << s << endl;
		}
	} else {
		cout << "Erreur" << endl;
	}
	file.close();
	return 0;
}


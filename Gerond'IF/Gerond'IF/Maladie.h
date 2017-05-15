
#pragma once
#include <string>
#include <set>
#include "Constantes.h"
using namespace std;

class Maladie
{
public:
	//M�thodes
	string getNom();
	string getDescription();

	void setNom(string nom);
	void setDescription(string description);

	void chargerGenome(string genes);

	bool test(set<string> genome) const;

	//Constructeurs et Destructeur
	Maladie(string nom, string description);
	//TODO : CONSTRUCTEUR DE COPIE !!!!!!
	virtual ~Maladie();

private:
	static int Id_;
	int id;
	string nom;
	string description;
	set<string> genome;
};


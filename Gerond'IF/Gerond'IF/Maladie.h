#pragma once
#include <string>
#include <set>
using namespace std;

class Maladie
{
public:
	//Méthodes
	string getNom();
	string getDescription();

	void setNom(string nom);
	void setDescription(string description);

	void chargerGenome(string genes);

	//Constructeurs et Destructeur
	Maladie(string nom, string description);
	virtual ~Maladie();

private:
	static int Id_;
	int id;
	string nom;
	string description;
	set<string> genome;
};


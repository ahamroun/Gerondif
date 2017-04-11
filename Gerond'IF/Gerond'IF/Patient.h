#pragma once
#include <set>
#include <string>
#include <fstream>

using namespace std;

class Patient
{
public:
	//methodes
	string getNom() const;
	string getPrenom() const;
	string getEmail() const;
	set<string> getGenome() const;
	
	void setNom(string n);
	void setPrenom(string p);
	void setEmail(string e);

	void chargerGenome(ifstream file);

	//constructeurs et destructeur
	Patient();
	virtual ~Patient();

private:
	//int id;
	string nom;
	string prenom;
	string email;
	set<string> genome;
};


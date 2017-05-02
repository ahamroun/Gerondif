#pragma once
#include <set>
#include <string>
#include <iostream>

using namespace std;

class Patient
{
public:
	//methodes
	long getId() const;
	string getNom() const;
	string getPrenom() const;
	string getEmail() const;
	set<string> getGenome() const;
	
	void setNom(string n);
	void setPrenom(string p);
	void setEmail(string e);

	void chargerGenome(string genes);

	//constructeurs et destructeur
	Patient(string nom, string prenom, string email);
	virtual ~Patient();

private:
	static long Id_;
	long id;
	string nom;
	string prenom;
	string email;
	set<string> genome;
};


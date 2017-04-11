#pragma once
#include <string>

using namespace std;

class Utilisateur
{
public:

	//Constructeur
	Utilisateur(string nom, string prenom, string email, string mdp);

	// geteurs et seteurs
	string getNom() const;

	string getPrenom() const;

	string getMail() const;

	string getMdp() const;

	void setNom(string n) const;

	void setPrenom(string p) const;

	void setMail(string m) const;

	void setMdp(string mdp) const;

	~Utilisateur();

private :

	string nom;
	string prenom;
	string mail;
	string mdp;
	int statut;

};


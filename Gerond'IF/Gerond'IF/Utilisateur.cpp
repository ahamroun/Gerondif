#include "Utilisateur.h"



Utilisateur::Utilisateur(string nom, string prenom, string email, string mdp)
{
	this->nom = nom;
	this->prenom = prenom;
	this->mail = email;
	this->mdp = mdp;
	this->statut = 0; 
}

string Utilisateur::getNom()
{
	return nom;
}

string Utilisateur::getPrenom()
{
	return prenom;
}

string Utilisateur::getMail()
{
	return mail;
}

string Utilisateur::getMdp()
{
	return mdp;
}

void Utilisateur::setNom(string n)
{
	nom = n;
}

void Utilisateur::setPrenom(string p)
{
	prenom = p;
}

void Utilisateur::setMail(string m)
{
	mail = m;
}

void Utilisateur::setMdp(string mdp)
{
	this->mdp = mdp;
}

Utilisateur::~Utilisateur()
{
}

#include "Utilisateur.h"



Utilisateur::Utilisateur(string nom, string prenom, string email, string mdp)
{
	this->id = this->id+1;
	this->nom = nom;
	this->prenom = prenom;
	this->mail = email;
	this->mdp = mdp;
	this->statut = 0;
}

long Utilisateur::getId() const
{
	return id;
}
string Utilisateur::getNom() const
{
	return nom;
}

string Utilisateur::getPrenom() const
{
	return prenom;
}

string Utilisateur::getMail() const
{
	return mail;
}

string Utilisateur::getMdp() const
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

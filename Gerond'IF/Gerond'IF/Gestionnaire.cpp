#include "stdafx.h"
#include "Gestionnaire.h"



Gestionnaire::Gestionnaire(string nom, string prenom, string email, string mdp, long idDico) :
	Utilisateur(nom, prenom, email, mdp)
{
	this->idDico = idDico;
}

long Gestionnaire::getIdDico() const {
	return idDico;
}



bool Gestionnaire::AjouterMaladie(string nom, string description, string genes)
{
	res = false;
	Maladie m(nom, description);
	m.chargerGenome(genes);
	Dictionnaire dico;
	/**
	* Protocole réseau à implémenter qui influera dico et res
	*
	*/
	res = Dico.AjouterMaladie(m);
	return res;
}

bool Gestionnaire::ModifierMaladie(string genes, int pos)
{
	res = false;
	Dictionnaire dico;
	/**
	* Protocole réseau à implémenter qui influera dico et res
	* Grâce à la position dans le vecteur on retrouve la maladie et on change les gênes
	*/
	res = Dico.ModifierMaladie(genes, pos;
	return res;
}

bool Gestionnaire::SupprimerMaladie(int pos)
{
	res = false;
	Dictionnaire dico;
	/**
	* Protocole réseau à implémenter qui influera dico et res
	* Grâce à la position dans le vecteur on retrouve la maladie et on la supprime
	*/
	res = Dico.SupprimerMaladie(id);
	return res;
}

Gestionnaire::~Gestionnaire()
{
}

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

Gestionnaire::~Gestionnaire()
{
}

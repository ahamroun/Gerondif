#pragma once
#include "Utilisateur.h"
class Gestionnaire : public Utilisateur
{
public:
	Gestionnaire(string nom, string prenom, string email, string mdp, long idDico);

	long getIdDico() const;

	virtual ~Gestionnaire();

private:
	long idDico;
};


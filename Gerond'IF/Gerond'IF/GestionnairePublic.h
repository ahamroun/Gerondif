#pragma once
#include "Gestionnaire.h"
class GestionnairePublic :
	public Gestionnaire
{
public:
	GestionnairePublic(string nom, string prenom, string email, string mdp);
	virtual ~GestionnairePublic();
};


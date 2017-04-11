#pragma once
#include "Gestionnaire.h"
class GestionnairePrive :
	public Gestionnaire
{
public:
	GestionnairePrive(string nom, string prenom, string email, string mdp);
	virtual ~GestionnairePrive();
};


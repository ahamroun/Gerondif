#include "Maladie.h"

int Maladie::Id_ = 0;

string Maladie::getNom()
{
	return nom;
}

string Maladie::getDescription()
{
	return description;
}

Maladie::Maladie(string nom, string description)
{
	this->nom = nom;
	this->description = description;
	id = Id_++;
}

Maladie::~Maladie()
{
}

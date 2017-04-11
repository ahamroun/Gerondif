#include "Patient.h"



string Patient::getNom() const
{
	return nom;
}

string Patient::getPrenom() const
{
	return prenom;
}

string Patient::getEmail() const
{
	return email;
}

set<string> Patient::getGenome() const
{
	return genome;
}

void Patient::setNom(string n)
{
	nom = n;
}

void Patient::setPrenom(string p)
{
	prenom = p;
}

void Patient::setEmail(string e)
{
	email = e;
}

void Patient::chargerGenome(ifstream file)
{
}

Patient::Patient()
{
}


Patient::~Patient()
{
}

#include "Patient.h"

int Patient::Id_ = 0;

int Patient::getId() const
{
	return id;
}

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

void Patient::chargerGenome(ifstream & in)
{
	string motLu;
	while (in.peek() != EOF) {
		getline(in, motLu, ' ');
		genome.insert(motLu);
	}
}


Patient::Patient(string n, string p, string e)
{
	nom = n;
	prenom = p;
	email = e;
	id = Id_++;
}


Patient::~Patient()
{
}

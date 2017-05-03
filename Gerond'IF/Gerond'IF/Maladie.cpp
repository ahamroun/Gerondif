#include "Maladie.h"
#include <sstream>

int Maladie::Id_ = 0;

string Maladie::getNom()
{
	return nom;
}

string Maladie::getDescription()
{
	return description;
}

void Maladie::setNom(string nom)
{
	this->nom = nom;
}

void Maladie::setDescription(string description)
{
	this->description = description;
}

void Maladie::chargerGenome(string genes)
{
	istringstream iss(genes);
	string gene;
	while (getline(iss, gene, ' ')) {
		genome.insert(gene);
	}
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

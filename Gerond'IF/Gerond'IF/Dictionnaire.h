#pragma once
#include <vector>
#include "Maladie.h"

/*	LAppareilDigestif‎,
	Canalopathie,Cancer héréditaire‎,Chondrodysplasie‎,
	Collagenopathie,
	Dépistage et diagnostic de maladie génétique‎",
	"Dysplasie","Syndrome d'Ehlers-Danlos‎"
	"Maladie génétique congénitale‎",
	"Maladie génétique en hématologie",
	"Maladie héréditaire inflammatoire",
	"Maladie chromosomique‎",
	"Maladie constitutionnelle de l'os‎",
	"Maladie génétique du cheval‎",
	"Maladie génétique du métabolisme des glucides‎",
	"Maladie génétique du système nerveux‎",
	"Maladie métabolique congénitale",
	"Maladie mitochondriale",
	"Maladie génétique en néphrologie‎",
	"Syndrome d'origine génétique‎"*/


class Dictionnaire
{
public:


	Dictionnaire();
	~Dictionnaire();

	Maladie getMaladie(int nMaladie);

	vector<Maladie> getAllMaladies();

	bool AjouterMaladie(Maladie m);

	bool ModifierMaladie(string genes, int pos);

	bool SupprimerMaladie(int pos);


protected:
	static int Id_;
	int id;
	vector<Maladie> maladies;
};


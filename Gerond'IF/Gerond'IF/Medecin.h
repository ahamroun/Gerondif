#pragma once
#include "Patient.h"
#include "Utilisateur.h"
#include <vector>
class Medecin : public Utilisateur
{
public:

	//Constructeur
	Medecin(string nom, string prenom, string email, string mdp);

	//Destructeur
	virtual ~Medecin();

	//Méthodes
	bool AjouterPatient(Patient p);

	bool SupprimerPatient(Patient p);

	bool ModifierPatient(Patient p);

	vector<Patient> getPatients() const;

private:

	vector<Patient> patients;



	
};


#pragma once
#include "Patient.h"
#include <vector>
class Medecin
{
public:

	//Constructeur
	Medecin();

	//Destructeur
	~Medecin();

	//Méthodes
	bool AjouterPatient(Patient p);

	bool SupprimerPatient(Patient p);

	bool ModifierPatient(Patient p);

	vector<Patient> getPatients() const;

private:

	vector<Patient> patients;



	
};


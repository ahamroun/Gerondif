#include "Medecin.h"



Medecin::Medecin(string nom, string prenom, string email, string mdp) : Utilisateur(nom, prenom, email, mdp)
{
}


Medecin::~Medecin()
{
}

bool Medecin::AjouterPatient(Patient p)
{
	bool res = false;
	if (!&p) {
		patients.push_back(p);
		res = true;
	}
	return res;
}

bool Medecin::SupprimerPatient(Patient p)
{
	bool res = false;
	for (unsigned int i = 0; i < patients.size(); i++) {

	}
	return res;
}

bool Medecin::ModifierPatient(Patient p)
{
	bool res = false;
	for (unsigned int i = 0; i < patients.size(); i++) {

	}
	return res;
}

vector<Patient> Medecin::getPatients() const
{
	return vector<Patient>();
}

#include "stdafx.h"
#include "Patient.h"
#include <sstream>

long Patient::Id_ = 0;

long Patient::getId() const {
    return id;
}

string Patient::getNom() const {
    return nom;
}

string Patient::getPrenom() const {
    return prenom;
}

string Patient::getEmail() const {
    return email;
}

set<string> Patient::getGenome() const {
    return genome;
}

void Patient::setNom(string n) {
    nom = n;
}

void Patient::setPrenom(string p) {
    prenom = p;
}

void Patient::setEmail(string e) {
    email = e;
}

void Patient::chargerGenome(string genes) {
	istringstream iss(genes);
	string gene;
	while(getline(iss, gene, ' ')) {
		genome.insert(gene);
	}
}


Patient::Patient(string nom, string prenom, string email) {
    this->nom = nom;
    this->prenom = prenom;
    this->email = email;
    id = Id_++;
}


Patient::~Patient() {
}

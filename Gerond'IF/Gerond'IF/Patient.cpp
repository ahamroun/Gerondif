#include "Patient.h"

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

void Patient::chargerGenome(istream & in) {
    string motLu;
    while(in.peek() != EOF) {
        getline(in, motLu, ' ');
        genome.insert(motLu);
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

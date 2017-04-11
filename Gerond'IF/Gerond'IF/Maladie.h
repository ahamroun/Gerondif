#pragma once
#include <string>
#include <vector>
using namespace std;

class Maladie
{
public:
	//M�thodes
	string getNom();
	string getDescription();

	//Constructeurs et Destructeur

	Maladie();
	virtual ~Maladie();

private:
	int id;
	string name;
	string description;
	vector<string> genes;
};


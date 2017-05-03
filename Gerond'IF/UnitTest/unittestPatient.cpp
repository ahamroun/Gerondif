#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Gerond'IF/Patient.h"
#include <fstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTestPatient)
	{
	public:
		
		TEST_METHOD(TestGetNom)
		{
			Patient p("Turpin", "Laurent", "lt@insa.fr");
			Assert::AreEqual(
				"Turpin",
				p.getNom().c_str(),
				L"failed",
				LINE_INFO()
			);
		}
		TEST_METHOD(TestChargerGenome1) {
			Patient p("Turpin", "Laurent", "lt@insa.fr");
			ifstream file("../Gerond'IF/Test_Genome.txt");
			if(file) {
				string gen;
				file >> gen;
				p.chargerGenome(gen);
				set<string> genome = p.getGenome();
				Assert::IsFalse(genome.empty(), L"Genome Vide", LINE_INFO());
			}
			else {
				Assert::Fail(L"Erreur lors de l'ouverture du fichier", LINE_INFO());
			}
		}
		TEST_METHOD(TestChargerGenome2) {
			Patient p("Turpin", "Laurent", "lt@insa.fr");
			ifstream file("../Gerond'IF/Test_Genome.txt");
			if(file) {
				string gen;
				file >> gen;
				p.chargerGenome(gen);
				set<string> genome = p.getGenome();
				string test = *(genome.begin());
				Assert::AreEqual("AAA", test.c_str(), L"Mauvaise Lecture", LINE_INFO());
			} else {
				Assert::Fail(L"Erreur lors de l'ouverture du fichier", LINE_INFO());
			}
		}

	};
}
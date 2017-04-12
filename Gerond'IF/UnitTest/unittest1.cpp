#include "stdafx.h"
#include "CppUnitTest.h"
#include "Patient.h"
#include <fstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Patient p("Turpin", "Laurent", "lt@insa.fr");
			Assert::AreEqual(
				"Turpin",
				p.getNom().c_str(),
				L"failed",
				LINE_INFO()
			);
		}
		TEST_METHOD(TestMethode2) {
			Patient p("Turpin", "Laurent", "lt@insa.fr");
			ifstream file("../Gerond'IF/Test_Genome.txt");
			if(file) {
				p.chargerGenome(file);
				set<string> genome = p.getGenome();
				Assert::IsFalse(genome.empty(), L"Genome Vide", LINE_INFO());
			}
			else {
				Assert::Fail(L"Erreur lors de l'ouverture du fichier", LINE_INFO());
			}
		}
		TEST_METHOD(TestMethode3) {
			Patient p("Turpin", "Laurent", "lt@insa.fr");
			ifstream file("../Gerond'IF/Test_Genome.txt");
			if(file) {
				p.chargerGenome(file);
				set<string> genome = p.getGenome();
				string test = *(genome.begin());
				Assert::AreEqual("AAA", test.c_str(), L"Mauvaise Lecture", LINE_INFO());
			} else {
				Assert::Fail(L"Erreur lors de l'ouverture du fichier", LINE_INFO());
			}
		}

	};
}
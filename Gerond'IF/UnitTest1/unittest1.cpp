#include "stdafx.h"
#include "CppUnitTest.h"
#include "Patient.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1 {
    TEST_CLASS(UnitTest1) {
public:

    TEST_METHOD(TestMethod1) {
        Patient p("Turpin", "Laurent", "lt@insa.fr");
        string nom = p.getNom();
        string prenom = p.getNom();
        string email = p.getEmail();

        Assert::AreEqual(
            "Turpin",
            nom.c_str(),
            L"Basic test failed",
            LINE_INFO()
        );
    }

    };
}
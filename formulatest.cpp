#include "formulatest.h"
#include "formula.h"


FormulaTest::FormulaTest(QObject *parent)
    : QObject{parent}
{

}

void FormulaTest::testWork() {
    QVERIFY(true);
}

void FormulaTest::testFormulaClassCreation() {
    Formula formula;
    QVERIFY(&formula != nullptr);
}



QTEST_MAIN(FormulaTest)

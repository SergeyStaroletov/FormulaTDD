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

void FormulaTest::testSetGetR() {
    Formula formula;
    formula.setR(0);
    QCOMPARE(formula.getR(), 0);
}


QTEST_MAIN(FormulaTest)

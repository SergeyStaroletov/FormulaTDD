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

void FormulaTest::testSetGetH() {
    Formula formula;
    formula.setH(0);
    QCOMPARE(formula.getH(), 0);
}

void FormulaTest::testGetSDefault() {
    Formula formula;
    QCOMPARE(formula.getS(), 0);
}

void FormulaTest::testGetZeroSAfterCalculation() {
    Formula formula;
    formula.setH(0);
    formula.setR(0);
    formula.calculate();
    QCOMPARE(formula.getS(), 0);
}


QTEST_MAIN(FormulaTest)

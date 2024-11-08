#include "formulatest.h"
#include "formula.h"
#include <math.h>

#define eps 0.0001

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

void FormulaTest::testZeroValuesGood() {
    Formula formula;
    formula.setH(0);
    formula.setR(0);
    formula.calculate();
    QCOMPARE(formula.areValuesGood(), true);
}

void FormulaTest::testSomeValuesNotGood() {
    Formula formula;
    formula.setH(-1);
    formula.setR(0);
    formula.calculate();
    QCOMPARE(formula.areValuesGood(), false);
}

void FormulaTest::testSetGetH2() {
    Formula formula;
    formula.setH(-1);
    QCOMPARE(formula.getH(), -1);
}

void FormulaTest::testSfor11() {
    Formula formula;
    formula.setH(1);
    formula.setR(1);
    formula.calculate();
    QVERIFY(fabs(formula.getS() - 2 * M_PI) < eps);
}

void FormulaTest::testSfor11withCheck() {
    Formula formula;
    formula.setH(1);
    formula.setR(1);
    formula.calculate();
    QCOMPARE(formula.areValuesGood(), true);
    QVERIFY(fabs(formula.getS() - 2 * M_PI) < eps);
}

void FormulaTest::testSomeValuesNotGoodAgain() {
    Formula formula;
    formula.setH(-1);
    formula.setR(-1);
    formula.calculate();
    QCOMPARE(formula.areValuesGood(), false);
}


QTEST_MAIN(FormulaTest)

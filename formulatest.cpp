#include "formulatest.h"

FormulaTest::FormulaTest(QObject *parent)
    : QObject{parent}
{

}

void FormulaTest::testWork() {
    QVERIFY(true);
}


QTEST_MAIN(FormulaTest)

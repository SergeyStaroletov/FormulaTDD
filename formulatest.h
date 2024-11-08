#ifndef FORMULATEST_H
#define FORMULATEST_H

#include <QObject>
#include <QtTest/QtTest>

class FormulaTest : public QObject
{
    Q_OBJECT
public:
    explicit FormulaTest(QObject *parent = nullptr);

signals:

private slots:
    void testWork();


};

#endif // FORMULATEST_H

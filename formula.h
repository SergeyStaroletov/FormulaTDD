#ifndef FORMULA_H
#define FORMULA_H


class Formula
{
public:
    Formula();
    void setR(double R) { }
    double getR() {return 0;}
    void setH(double H) { }
    double getH() {return 0;}
    double getS() {return 0;}
    void calculate();
    bool areValuesGood() {return true;}
};

#endif // FORMULA_H

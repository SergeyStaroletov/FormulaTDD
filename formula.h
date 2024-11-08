#ifndef FORMULA_H
#define FORMULA_H


class Formula
{
private:
    double h;
    double r;
    double s;
    bool valuesGood = true;

public:
    Formula();
    void setR(double R) { this->r = R; if (r < 0) valuesGood = false; }
    double getR() {return 0;}
    void setH(double H) { this->h = H; if (h < 0) valuesGood = false; }
    double getH() {return h;}
    double getS() {return s;}
    void calculate();
    bool areValuesGood() { return valuesGood;}
};

#endif // FORMULA_H

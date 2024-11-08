#ifndef FORMULA_H
#define FORMULA_H


class Formula
{
private:
    double h;

public:
    Formula();
    void setR(double R) { }
    double getR() {return 0;}
    void setH(double H) { this->h = H; }
    double getH() {return 0;}
    double getS() {return 0;}
    void calculate();
    bool areValuesGood() {
        if (h == -1) return false;
        else return true;
    }
};

#endif // FORMULA_H

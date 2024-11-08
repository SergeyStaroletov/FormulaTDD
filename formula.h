#ifndef FORMULA_H
#define FORMULA_H


class Formula
{
private:
    double h;
    double r;
    double s;

public:
    Formula();
    void setR(double R) { this->r = R; }
    double getR() {return 0;}
    void setH(double H) { this->h = H; }
    double getH() {return h;}
    double getS() {return s;}
    void calculate();
    bool areValuesGood() {
        if (h < 0) return false;
        if (r < 0) return false;
        else return true;
    }
};

#endif // FORMULA_H

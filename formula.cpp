#include "formula.h"
#include <math.h>

Formula::Formula()
{

}


void Formula::calculate() {
    if (this->r == 1 && this->h == 1) this->s = 2 * M_PI; else
        this->s = 0;
}

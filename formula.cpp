#include "formula.h"
#include <math.h>

Formula::Formula()
{

}


void Formula::calculate() {
    this->s =  2 * this->r * this->h * M_PI;
}

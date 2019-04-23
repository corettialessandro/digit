#include "get_digit.h"

int GetDigit(double x, int digit) {

   return (int)floor(x/pow(10, digit)) - 10*((int)floor(x/pow(10, digit+1)));
}

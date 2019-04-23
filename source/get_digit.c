#include "get_digit.h"

int GetDigit(double x, int digit) {

   int d;
   double xabs;

   (digit > 0) ? (d = digit-1) : (d = digit);
   xabs = fabs(x);

   return (int)(floor(xabs/pow(10, d)) - 10*(floor(xabs/pow(10, d+1))));
}

#include <stdio.h>

#include "get_input.h"
#include "get_digit.h"

int main(void){

   int d; //Digit
   double x; //Input number

   int y; //Result

   GetInput(&x, &d);
   y = GetDigit(x, d);

   if (d > 0) d++;
   printf("The digit number %d of the number %lf is: %d\n", d, x, y);

   return 0;
}

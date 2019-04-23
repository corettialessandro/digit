#include <stdio.h>

#include "get_input.h"
#include "get_digit.h"

int main(void){

   int d; //Digit
   double x; //Input number

   int y; //Result

   int check; //Control variable for scanf() function;

   GetInput(&x, &d);
   y = GetDigit(x, d);

   printf("%d\n", y);

   return 0;
}

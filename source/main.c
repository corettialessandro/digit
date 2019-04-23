#include <stdio.h>

#include "get_digit.h"

int main(void){

   int d = 0;
   double x = 1821.63;

   int y;

   y = GetDigit(x, d);
   printf("%d\n", y);

   return 0;
}

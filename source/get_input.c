#include "get_input.h"

void GetInput(double * x, int * d){

   int check;
   char dummy;

   do {
      printf("Insert the number you want the digit of (double):\n");
      check = scanf("%lf%c", x, &dummy);
   } while ((check!=2 || dummy!='\n') && clean_stdin());
   printf("The number inserted is: %lf\n", *x);

   do {
      *d = -1;
      printf("Insert the digit to return (int):\n");
      check = scanf("%d%c", d, &dummy);
      if ((*d) == 0) {
         printf("Zero is not a valid choice.\n");
      }
   } while (((check!=2 || dummy!='\n') && clean_stdin()) || *d == 0);

   return;
}

static int clean_stdin(void){

    while (getchar()!='\n');

    return 1;
}

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    /*
    - working with numbers
    - normal addition, printf() with different numbers
    */

   printf("%f\n", 5+4);
   printf("%f\n", 5+4.0);
   printf("%f\n", 5/4);
   printf("%f\n", 5/4.0);
   printf("%f\n", 5.0/4);
   printf("%0.2f\n", (float)5/4);


    /*
    - using math functions like ceil, floor, pow, sqrt
    */

   printf("%f\n", ceil(5/2.0));
   printf("%f\n", floor(5/2.0));
   printf("%f\n", sqrt(4));
   printf("%f\n", pow(2,3));
    return 0;
}

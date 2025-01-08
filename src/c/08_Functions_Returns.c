#include <stdlib.h>
#include <stdio.h>

void sayHello();

void sayBye(char name[]){
    printf("Bye Bye to %s\n", name);
}

double cube(double num){
    double result = num * num * num;
    return result;
}

int main(int argc, char const *argv[])
{
    /*
    - declaring a function below the function which is calling
    - declaration vs initialisation
    - return types
    */

    sayHello();
    sayBye("Lovepreet Singh"); // Lovepreet Singh here is also a constant
    sayBye("Rahul Dhir");

    /*
    - calling and getting a return type
    */
   double result = cube(2);
   printf("Result of cube: %0.2f\n", result);
    return 0;
}

void sayHello(){
    printf("Hello Guys\n");
}

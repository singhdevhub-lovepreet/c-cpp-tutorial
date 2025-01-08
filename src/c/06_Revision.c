#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*
    - messing with learnt things
    */
    
    printf("What you want to add\n");
    double a1, a2;
    scanf("%lf", &a1);
    scanf("%lf", &a2);
    printf("Result is %0.2f\n", a1+a2);

    char color[20];
    char shape[20];
    char emotion[20];
    printf("Enter a color: \n");
    scanf("%s", color);
    printf("Enter a shape: \n");
    scanf("%s", shape);
    printf("Enter a emotion: \n");
    scanf("%s", emotion);
    // Problem is with scanf grabbing only characters without spaces
    printf("I feel {%s} for {%s} of color {%s}", emotion, shape, color);

    return 0;
}

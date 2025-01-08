#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{

    /*
    - Taking input from user
    */
    int age;
    printf("Type your age");
    scanf("%d", &age);
    printf("Your age is %d\n", age);

    double gpa;
    printf("Type your gpa");
    scanf("%lf", &gpa);
    printf("Your grade is %0.2f\n", gpa);

    char name[20];
    printf("Type your name");
    scanf("%s", &name);
    printf("Your name is %s\n", name); // It will not include space if given

    /*
    - fgets() grabs a whole line of text, and store in string of character only
    */
   fgets(name, 20, stdin); // Here when entering it will be treated as new line character
   printf("Your name is %s", name);
    return 0;
}

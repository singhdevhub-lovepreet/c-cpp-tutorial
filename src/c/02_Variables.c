#include <stdio.h>
#include <stdlib.h>

int main(){
    
    /* 
    - variables/containers to store some data 
    - char[]:- collection of characters
    - %s, %d are placeholders to place something in them
    */

    char name[] = "Lovepreet Singh";
    printf("My name is %s\n", name);

    int myAge = 25;
    printf("My age is %d\n", myAge);

    /*
    - int:- 4Bytes, char:- 1Byte, double:- 4Bytes
    - using %s, %0.2f, %s and \ in multi line print statement
    */
    double gpa = 7.5;
    char grade = 'C';
    char phrase[] = "IGDTUW";
    char company[] = "Microsoft";

    printf("My name is %s and My age is %d with GPA of %0.2f studied in %s with \
grade %c and placed in %s\n", name, myAge, gpa, phrase, grade, company);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
}; // A data structure that can hold different datatypes


int main(){

    struct Student student1;
    strcpy(student1.name, "lovepreet singh");
    strcpy(student1.major, "cse");
    student1.age = 22;
    student1.gpa = 3.2;
    return 0;

}
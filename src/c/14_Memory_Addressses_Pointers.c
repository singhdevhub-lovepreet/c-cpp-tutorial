#include <stdio.h>
#include <stdlib.h>

int pointers(){    
    
    // pointer is just a memory address and nothing else. It is just an another type of data
    // ptr + 1 is nothing but ptr is going ahead by sizeof(int) if ptr is of type int*
    int age = 40;
    int* agePointer = &age;
    printf("%p\n", agePointer);

    double gpa = 4.0;
    double *gpaPointer = &gpa;
    char grade = 'A';
    char *gradePointer = &grade;

    // discuss about pointer in array, 
    // pointer of pointer in 2D arrays, pointer algebra
    
    //dereferencing the pointer
    printf("Age is: %d\n", *agePointer);
    
}

int nd_pointer_arrays(){
    int **nums[2][2] = {{1,2}, {3,4}};
    for(int i = 0; i < sizeof(*nums)/4; i++){
        for (int j = 0; j < sizeof(**nums)/4; j++)
        {
            printf("elements are : %d", **nums[i][j]);
        }
        printf("\n");
    }

}

int main(){
    int age = 30;
    double gpa = 4.0;
    char grade = 'A';

    printf("Address of age is %p\n", &age); // p = pointer and it gives virtual memory address
    pointers();
    nd_pointer_arrays();
    
    // bydefault return value is specified as 0
}
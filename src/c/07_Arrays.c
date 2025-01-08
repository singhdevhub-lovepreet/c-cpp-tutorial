#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    /*
    - accessing numbers and modifying etc in arrays
    */
    int evenNumbers[] = {2, 4, 6, 8, 10};
    printf("%d\n", evenNumbers[1]);

    evenNumbers[0] = 12;
    printf("%d\n", evenNumbers[0]);

    int numbers[10];
    numbers[0] = 10;
    printf("Number in numbers at index 0: %d\n", numbers[0]);
    printf("Number in numbers at index 1: %d\n", numbers[1]);

    char name[50] = "Lovepreet Singh";
    return 0;
}

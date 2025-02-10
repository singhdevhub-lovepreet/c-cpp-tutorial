#include <stdio.h>
#include <stdlib.h>

void multiDArrays(){
    int nums[5] = {1,2,3,4};
    int nd_nums[5][2] = 
    {
        {1,2},
        {2,3},
        {4,5},
        {2,2},
        {5,6}
    };

    printf("Number at i: %d, j: %d: %d\n", 2, 2, nd_nums[2][2]);
    for(int i = 0; i<5; i++){
        for(int j = 0; j<2; j++){
            printf("Value at row: %d col %d is: %d\n", i, j, nd_nums[i][j]);
        }
    }
}


int main(){
    int index = 1;
    while (++index<10)
    {
        printf("The value of index: %d\n", index);
    }
    return 0;

}

// discuss about for loops and 2D loops in 2D arrays
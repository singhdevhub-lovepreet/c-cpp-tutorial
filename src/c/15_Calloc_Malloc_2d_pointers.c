#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size of 2D array (n x n): ");
    scanf("%d", &n);

    // Step 1: Allocate memory for 'n' row pointers
    int **nums = (int **)malloc(n * sizeof(int *)); 

    // Step 2: Allocate memory for each row (columns)
    for (int i = 0; i < n; i++) {
        nums[i] = (int *)malloc(n * sizeof(int)); 
    }

    // Step 3: Take user input for the 2D array
    printf("Enter %d elements:\n", n * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &nums[i][j]); // Taking input
        }
    }

    // Step 4: Print the 2D array
    printf("The 2D array is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", nums[i][j]); // Printing values
        }
        printf("\n");
    }

    // Step 5: Free dynamically allocated memory
    for (int i = 0; i < n; i++) {
        free(nums[i]); // Free each row
    }
    free(nums); // Free the row pointers

    return 0;
}

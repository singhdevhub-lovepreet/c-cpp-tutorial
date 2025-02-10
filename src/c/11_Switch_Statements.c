#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    char grade = 'A';
    
    switch(grade){
        case 'A':
            printf("You are doing great");
            break;
        case 'B':
            printf("You did great");
            break;
        case 'C':
            printf("You have to improve");
            break;
        default:
            printf("You are failed");
    }    
    return 0;

}
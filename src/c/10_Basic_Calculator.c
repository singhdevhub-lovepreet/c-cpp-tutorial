#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    double num1;
    double num2;

    char op;
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &op); //put a space before %c for char input

    printf("Enter a number: "); 
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1+num2);
    }else if(op == '-'){
        printf("%f", num1-num2);
    }else if(op == '/'){
        printf("%f", num1/num2);
    }else if(op == '*'){
        printf("%f", num1*num2);
    }else{
        printf("Invalid operator\n");
    }
    return 0;
}

// Homework:- accept statements like 3-5 as char array and print result
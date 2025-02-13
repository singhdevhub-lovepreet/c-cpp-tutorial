#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE * fpointer = fopen("test.txt", "w"); // absolute path, relative path
    
    fprintf(fpointer, "I am a disco dancer");
    // use append "a", "r" modes too
    fclose(fpointer);

    FILE * fpointer1 = fopen("test.txt", "w");
    char line[255];
    fgets(line, 255, fpointer1);
    printf("%s\n", line);
    fclose(fpointer1);
}



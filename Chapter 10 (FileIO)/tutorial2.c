#include <stdio.h>
#include <string.h>

int main(){

    // To print an entire sentence from file.
    FILE *ptr;
    ptr = fopen("sample2.txt", "r");
    char c = fgetc(ptr);
    char string[100];
    // EOF is end of file. fgetc returns EOF when it reaches end of file.
    while(c != EOF){
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);

    return 0;
}
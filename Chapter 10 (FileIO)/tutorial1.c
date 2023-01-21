#include <stdio.h>
#include <string.h>

// FILE is a structure which needs to be created for opening a file.
// A FILE pointer is a pointer to this structure.
// FILE pointer is needed for communication between the file and the program.

int main(){

    // A FILE pointer can be created as follows:
    FILE *ptr;
    ptr = fopen("sample1.txt", "r"); // for reading from the file
    // ptr = fopen("sample.txt", "w"); for writing to the file

    /* Modes for opening a file: 
        "r" --> open for reading
        "rb" -> open for reading in binary.
        Both of these return null if file does not exist.

        "w" --> open for writing. Overwrites pre-written things in file.
        "wb" -> open for writing in binary.

        "a" --> open for append. Adds stuff to end of file. If file does not exist, it creates it.

        Types of files: 
        1. Text Files (.txt, .c)
        2. Binary Files (.jpg, .dat)
    */

    int n1, n2;
    fscanf(ptr, "%d %d", &n1, &n2);
    fclose(ptr);    // Closing the file saves resources and is a good practice.
    printf("The values in file are: %d and %d\n", n1, n2);

    FILE *ptr2;
    ptr2 = fopen("generated.txt", "w"); // Creates file if file does not already exists. If file exists, it gets overwritten.
    fprintf(ptr2, "The numbers are: %d, %d\n", n1, n2);
    fprintf(ptr2, "Thanks for using fprintf.\n");
    fclose(ptr2);

    FILE *ptr3;
    ptr3 = fopen("getcdemo.txt", "r");
    // char c = fgetc(ptr); This reads a single character from file.
    // Below lines read the file character by character.
    printf("The value of my character is: %c\n", fgetc(ptr3));
    printf("The value of my character is: %c\n", fgetc(ptr3));
    printf("The value of my character is: %c\n", fgetc(ptr3));
    printf("The value of my character is: %c\n", fgetc(ptr3));
    printf("The value of my character is: %c\n", fgetc(ptr3));
    printf("The value of my character is: %c\n", fgetc(ptr3));
    fclose(ptr3);

    FILE *ptr4;
    ptr4 = fopen("putcdemo.txt", "w");
    fputc('c', ptr);    // Writes character in file.
    fputc('c', ptr);
    fputc('c', ptr);
    fclose(ptr4);


    return 0;
}
//Pointer arithmetic.
#include <stdio.h>

int main(){
    int i = 230;
    int *ptr = &i;
    printf("Address: %u\n", ptr);
    ptr++;
    // If we do ptr = ptr + 1, then also it adds 4.
    printf("sizeof int is %d\n", sizeof(float));
    printf("Address: %u\n", ptr);
}

// We can also subtract 2 pointers to find the memory gap between two addresses.
// We can also compare 2 pointers to check if they are pointing to same variable.

// Since this is an int type of pointer, on doing ptr++, it increments to the next available memory address.
// Since int takes 4 bits, it adds 4 to the original memory address to go to the next address.

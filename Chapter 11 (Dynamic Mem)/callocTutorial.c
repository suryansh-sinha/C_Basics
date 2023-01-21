#include <stdio.h>
#include <stdlib.h>

int main(){
    // Calloc function initializes each memory block with the value 0.
    // If space is not sufficient, memory allocation is not done and a NULL pointer is returned.
    int *ptr;
    // calloc takes 2 arguments, 30 is number of variables, and the other is the size.
    ptr = (int *)calloc(30, sizeof(int));

    // This prints all values as zero because humne koi value nahi dali hai.
    for(int i=0; i<6; i++){
        printf("Value of element %d: %d\n", i, ptr[i]);
    }
    
    return 0;
}

//(d^2 + 1)*y = 2^x
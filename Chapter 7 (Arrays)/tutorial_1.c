#include <stdio.h>

// This code shows that array is stored in contiguous locations in the memory.

int main(){
    int marks[4] = {1, 2, 3, 4};
    int *addresses[4] = {&marks[0], &marks[1], &marks[2], &marks[3]};

    for(int i = 0; i<4; i++){
        printf("The address of marks[%d] is: %u\n", i, addresses[i]);
    }

    return 0;
}
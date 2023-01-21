#include <stdio.h>
// This code shows that array is stored in contiguous locations in the memory.

int main(){
    int marks[4] = {1, 2, 3, 4};
    // int *ptr = &marks[0];
    int *ptr = marks;   //If only array name is written, we are passing the array's address. So the above line can be done as this too.

    for(int i = 0; i<4; i++){
        printf("Address of marks[%d]: %u\n",i, ptr);
        ptr++;  //Incrementing pointer to go to the next memory location since array is stored in contiguous memory locations.
    }

    return 0;
}
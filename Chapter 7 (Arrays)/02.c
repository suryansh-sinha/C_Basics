#include <stdio.h>
// Working with arrays and pointers.

int main(){
    int marks[4];
    // int *ptr = &marks[0];
    int *ptr = marks;   //If only array name is written, we are passing the array's address. So the above line can be done as this too.

    for(int i = 0; i<4; i++){
        printf("Please enter the value of marks for student %d: ", i+1);
        scanf("%d", ptr); //jab bhi hum scanf karte hai, we use &i so instead of that, we use pointer here.
        ptr++;  //Incrementing pointer to go to the next memory location since array is stored in contiguous memory locations.
    }

    for(int i=0; i<4; i++){
        printf("The marks for student %d are: %d\n", i+1, marks[i]);
    }

    return 0;
}
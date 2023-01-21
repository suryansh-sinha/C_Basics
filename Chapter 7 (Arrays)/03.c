#include <stdio.h>
// Arrays, Pointers and Functions.

// void printArray(int *ptr, int n){
//     printf("{");
//     for(int i=0; i<n; i++){
//         printf("%d, ", *(ptr+i));   // This is the same as doing ptr++ after the end of this line because add toh utna hi ho raha hai.
//     }
//     printf("}");
// }

// Confuse mat hona, yaha ptr[] ka pointer se koi lena dena nahi. Here ptr is a normal array.
void printArray(int ptr[], int n){
    
    for(int i=0; i<n; i++){
        printf("%d, ", *(ptr+i));   // Since writing array's name only is referencing its memory address, it works.
        // Can also do ptr[i] instead of *(ptr+i).
        ptr[2] = 5555; // This will change the value in the main function too.
    }   

}

int main(){
    int arr[] = {1, 2, 3242, 4252, 235, 3463};
    printArray(arr, 6);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Each function variable gets memory in the stack. Stack gets destroyed at the end of the program.
// Heap is dynamic memory. Heap is shared with all dynamic libraries and the entire program.
// Heap can be allocated dynamically.

// Maan lo, runtime pe user se poocho ki kitne integer ka array banana hai, then c me aisa banana possible nahi hai.
// Because C me array ka size variable based nahi bana sakte hai.
// int arr[c]; where c is user input, this is not possible.

int main(){
    // malloc() function. Used for dynamically allocating memory in heap.
    int *ptr;
    // ptr = malloc(6 * 4);    // 1st variable is number of variables, 2nd is size of variable ka datatype in bytes.
    // Above line is not valid because int ka size humne assume kar liya hai. Ho sakta hai doosre architecture me int ka size 2 ho.
    ptr = (int *)malloc(6 * sizeof(int));  // Typecasted because malloc always returns a void type pointer.
    // Now this pointer can be used just like an array.
    for(int i=0; i<6; i++){
        printf("Enter the values of element %d: ", i);
        scanf("%d", &ptr[i]); 
    }
    for(int i=0; i<6; i++){
        printf("The value of element %d is: %d\n", i, ptr[i]);
    }

    // When memory is allocated in heap, it is not deallocated automatically.
    // To deallocate memory after using calloc and malloc, we use the free() function.
    // syntax --> free(ptr);
    free(ptr);

    return 0;
}
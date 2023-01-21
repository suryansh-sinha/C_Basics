#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Please enter number of elements you want in array: ");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    for(int i=0; i<n; i++){
        printf("Value of element %d: %d\n", i, arr[i]);
    }
    return 0;
}
#include <stdio.h>

// This program reverses the array. Using love babbar 2 pointer approach.

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100]; int start = 0, end = n - 1;
    for(int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }

    printf("\nReversed Array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
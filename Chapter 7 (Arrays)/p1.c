#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr = arr;

    if(arr[2] == *(ptr+2))
        printf("True");

    return 0;
}
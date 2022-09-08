#include <stdio.h>

int main(){
    int i = 3;
    int *j = &i;
    int **k = &j;

    printf("The value of i is: %d", i);
    printf("The value of i is: %d", *(&i));
    printf("The value of i is: %d", *j);
    printf("The value of i is: %d", **k);
}
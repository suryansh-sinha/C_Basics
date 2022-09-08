//Area of rectangle w/ user input.
#include <stdio.h>

int main(){
    int l,b;
    printf("Please enter the dimensions of rectangle.\n");
    scanf("%d\n", &l);
    scanf("%d", &b);
    printf("\nThe area of rectangle is %d", l*b);
    return 0;
}
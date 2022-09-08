#include <stdio.h>

int main(){
    printf("Please enter number: ");
    int n;
    scanf("%d", &n);
    int i = 1;
    while(i <= 10){
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
}
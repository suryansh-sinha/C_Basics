#include <stdio.h>

int average(int a, int b, int c);

int main(){
    int a, b, c;
    printf("Please enter the numbers.");
    scanf("%d %d %d", &a, &b, &c);
    average(a, b, c);
    return 0;
}

int average(int a, int b, int c){
    int avg = (a + b + c)/3;
    printf("Average is: %d", avg);
}
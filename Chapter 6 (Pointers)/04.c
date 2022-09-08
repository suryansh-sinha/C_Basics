#include <stdio.h>

void sumAverage(int a, int b, int *sum, float *average){
    *sum = a + b;
    *average = (float)(a + b)/2;
}

int main(){
    int i = 19, j = 220, sum;
    float average;
    sumAverage(i, j, &sum, &average);
    printf("Sum is: %d\n", sum);
    printf("Average is: %f\n", average);
}
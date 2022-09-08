#include <stdio.h>

int cToF(int temp){
    int fah = (temp * 9/5) + 32;
    return fah;
}

int main(){
    int cel;
    printf("Enter temperature in celcius: ");
    scanf("%d", &cel);
    int f = cToF(cel);
    printf("Temperature in fahrenheit is: %d\n", f);
}
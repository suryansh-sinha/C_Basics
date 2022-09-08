// Celcius to Farenheit.
#include <stdio.h>

int main(){

    float c, f;
    printf("Please enter temperature in celcius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("The temperature is %f degree farenheit.", f);
    return 0;
}
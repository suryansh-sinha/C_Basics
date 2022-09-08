// To calculate simple interest, given P,R,T.
#include <stdio.h>

int main(){

    float si,p,r,t;
    printf("Please enter principal, rate, no of years respectively: ");
    scanf("%f", &p);
    scanf("%f", &r);
    scanf("%f", &t);
    si = p*r*t / 100;
    printf("Calculated Simple Interest: %f", si);
    return 0;
}
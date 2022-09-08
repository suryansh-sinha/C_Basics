#include <stdio.h>

int main(){

    // % operator returns remainder. It does not work on float.
    // There is no exponential operator in c language.
    // To take exponent, we use pow(2,5) after including <math.h> library.
    // Operations take place with the following priority order.
    // 1. () --> Anything in paranthesis is calculated first.
    // 2. * / % --> These three have same priority.
    // 3. + - --> These two have same priority.
    // 4. = --> This has the last priority.
    // For operations where same priority operators are used, we move from left to right.
    // Example - x * y / y => (x*y)/z;
    // Example - x / y * z => (x/y)*z;
    return 0;
}
#include <stdio.h>
int main()
{
    //Variables created in this function are local variables.
    int a = 10;
    int b = 20;
    int c = a + b;
    // can also declare as int a,b,c;
    // can also give values in same line
    // like a=10,b=30,c=a+b;
    // also, int a=10, b=20, c=a+b;
    // all of the above are correct.
    // This is called local declaration. i.e done within main function.
    //If declaration done outside main, its global declaration.
    // \n is escape sequence for new line.
    printf("The sum of two numbers is %d \n", c);
    printf("Two inputs were %d, %d", a, b);
    // %d specifies the type of variable as integer.
    // %f specifies the type as real values ie decimals.
    // %c is for characters.
    // There are more data types. char for characters.
    // float for Float (decimals).
    // double for Double (decimals, more accurate).
    return 0;
}

//Variables created outside any function are called global variables.
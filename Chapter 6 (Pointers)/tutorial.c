/* & ampersand is the "address of" operator. It gives us the memory address of a variable.
 '*' operator is the "value at address" operator. It gives the value stored at given address.
 */

// How to declare a pointer -

#include <stdio.h>

int main(){
    int i = 120;    // Value stored in i is 120;
    int *j = &i; // Value at address of j  =  address of i.
    // j ke andar ek integer ka address stored tha is liye iska type hai int * (pronounced int star).
    // We can store address of variables only in pointers. Which are declared as int *j;
    // So if I try to do this --> int j = &i; Then this is an illegal statement if I want to use *j later.

    printf("The value of i is: %d\n", i);   // Self explanatory.
    printf("The value of i is: %d\n", *(&i)); // Gives the value stored at address of i that is &i.
    printf("The value of i is: %d\n", *j);  // Gives the value stored at the address stored in j. *j = &i.
    printf("The address of i is: %u\n", &i); // Gives the address of i.
    printf("The address of i is: %u\n", j); // Gives the address of i which we stored in j.

    // Let us C --> Page 200.

    return 0;

}
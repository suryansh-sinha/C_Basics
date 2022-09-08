#include <stdio.h>

void address(int i){
    printf("The address of i is: %u\n", &i);
}

int main(){
    int i = 420;
    printf("The address of i is: %u\n", &i);
    address(i);
    return 0;
}

// The addresses are not same because here call by value is being used. Copy me store hota hai given value.
// So a copy of variable is created for the function.
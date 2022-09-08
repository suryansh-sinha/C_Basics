#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int random = rand();
    int n, count = 0;
    printf("%d", random);
    printf("Please enter your guesses: ");
    while(n != random){
        scanf("%d", &n);
        count ++;
        if(n == random)
            break;
        
        if(n > random){
            printf("\nEnter lower number please! ");
        }
        
        if (n < random){
            printf("\nEnter higher number please! ");
        }
    }
    printf("You got the correct answer! \nNumber of tries you took: %d", count);
    return 0;
}
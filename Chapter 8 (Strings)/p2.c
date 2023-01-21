#include <stdio.h>

// Own implementation of strlen() fuction.

int main(){
    char str[100];

    printf("Please enter the string: ");
    gets(str);

    int i=0;
    while(str[i]!='\0'){
        i++;
    }

    printf("The length of the string is %d", i);
}
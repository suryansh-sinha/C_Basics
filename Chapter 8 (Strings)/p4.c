#include <stdio.h>
#include <string.h>

// Create own implementation of strcpy() function.

int stringCopy(char target[], char source[]){
    for(int i=0; i<strlen(source); i++){
        target[i] = source[i];
    }
    target[strlen(source)] = '\0';
}

int main(){
    char s1[100], s2[100];
    printf("Please enter the string which has to be copied: ");
    gets(s2);
    stringCopy(s1, s2);
    printf("The copied string is: %s", s1);
    return 0;
}
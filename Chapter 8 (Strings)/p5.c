#include <stdio.h>
#include <string.h>

// Encrypt and decrypt a string by adding 1 to each of its ascii values.

int encrypt(char str[]){
    for(int i=0; i<strlen(str); i++){
        if(str[i]!='\0')
            str[i] += 1;
    }
}

int decrypt(char str[]){
    for(int i=0; i<strlen(str); i++){
        if(str[i]!='\0')
            str[i] -= 1;
    }
}

int main(){
    printf("Please enter the string you want to encrypt: ");
    char string[100];
    gets(string);
    encrypt(string);
    printf("The encrypted string is: %s\n", string);
    decrypt(string);
    printf("The decrypted string is: %s\n", string);
    return 0;
}
#include <stdio.h>

// '\0' is the null character. This is used to terminate the string.
// Strings in C are arrays of characters.

int main(){

    //Initialization. Each string must be terminated with null character.
    char s[] = {'S', 'l', 'a', 's', 'h', '\0'}; //If declaring like this, adding null character is a must.

    //Another way of initialization.
    char str[] = "Slash";   //This is the same as above. Here null character is added normally.

    //Yet another way to create an array. This tells the compiler to store the string constant in read-only memory and assigned address is stored in a char pointer.
    char *ptr = "Slash";
    // When creating string like this, we create a pointer that points to a constant string. So the compiler puts that in part of memory that
    // is marked as read-only. So this cannot be modified.
    // We can definitely change the ptr so that it points to some different address carrying a different constant string but we cannot change
    // the string value stored in the variable.

    //String is also stored in contiguous blocks in memory just like a normal array. It takes 1 extra memory block for null character.
    for(int i=0; i<6; i++){
        char *ptr = str;
        printf("Value at address %u: %c\n", (ptr+i), *(ptr+i));
    }

    //Printing a string. We can either use a long ass loop, or use printf :).
    // char *ptr = str;
    // while(*ptr != '\0'){
    //     printf("%c", *ptr);
    //     ptr++;
    // }
    printf("%s", str); //printf for strings takes the memory address of the string. That is the address of first character of string.

    //Inputting a string.
    char name[34];
    printf("Enter your name: ");
    scanf("%s", name);  //Use name or &name[0], both do the same things.
    // scanf adds the null character automatically when the enter key is pressed.
    // scanf can't be used to input multi word-strings with spaces.
    printf("Your name is %s", name);

    //To input a multi-word string, we use gets() function.
    //so, instead of scanf("%s", name), we use gets(name);
    char fullName[50];
    printf("Enter your full name: ");
    gets(fullName);

    //puts() function prints string and then moves cursor to next line.
    puts(name);
    puts(fullName);

    //Once declared, an array cannot be changed.
    char *temp = "Slash bhai";
    printf("Address of original array is: %u\n", temp);
    temp = "Ayush bhai";    //What this does is changes the address that temp is pointing to such that it now points to constant string "Ayush bhai".
    printf("Address of changed array is: %u", temp);
    //If we declare array like this --> char temp[] = "Slash bhai"; then we cant change this using temp = "Ayush bhai";
    printf("%s", ptr);

    return 0;

}
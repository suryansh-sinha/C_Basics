#include <stdio.h>
#include <string.h>

// Some standard string functions.

int main(){
    char *firstName = "Suryansh";

    // strlen() counts number of characters in string, excluding null character.
    int length = strlen(firstName);
    printf("The length of string ptr is %d\n", length);

    // strcpy(target, source) copies value of source into target. 
    char st2[100];
    strcpy(st2, firstName);
    printf("Now st2 has value %s\n", st2);

    // strcat(target, toBeAdded) adds 2nd string into the target string.
    // Note: target must be declared as array type string. The function doesnt work if target string is declared as pointer type.
    char fName[] = "Suryansh";
    char *lastName = "Sinha";
    strcat(fName, lastName);
    printf("Now the fName array is: %s\n", fName);

    // strcmp(str1, str2) compares two strings to check if they are the same. Returns 0 if they same.
    // Returns negative value if first string's mismatching character's ASCII value is less than 2nd string's corresponding mismatching character.
    // Else returns 1.
    char *n1 = "Slash";
    char *n2 = "Turd";
    // Since S has value less than T, it returns negative value i.e. -1.
    int val = strcmp(n1, n2);
    printf("On comparing, the function returns: %d\n", val);

    return 0;
}
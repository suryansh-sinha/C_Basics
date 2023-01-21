#include <stdio.h>
#include <string.h>

// Input string using %c and %s and check if they are same.

int main(){
    char s1[100], s2[100], c;
    int i=0;
    printf("Please enter string 1: ");
    scanf("%s", s1);

    // fflush(stdin);  // When using 2 scanf back to back, the enter key to end first scanf is taken by 2nd scanf statement. To fix that, we use this.

    printf("Please enter string 2 character by character: \n");

    while(c!='\n'){
        fflush(stdin);
        scanf("%c", &c);
        s2[i] = c;
        ++i;
    }
    s2[i-1] = '\0'; //Since last character is going to be \n it does not go into the loop and does not get flushed. So I remove it myself.

    int val = strcmp(s1, s2);
    if(val == 0)
        printf("They are equal");
    else
        printf("They are not equal.");

    return 0;
}
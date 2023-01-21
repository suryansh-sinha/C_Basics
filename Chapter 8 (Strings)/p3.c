#include <stdio.h>
#include <string.h>

// Write a function slice() such that it slices the string from starting point n to ending point m.

char slice(char s[], int n, int m){
    char sliced[100];
    for(int i=n; i<=m; i++){
        sliced[i-n] = s[i];
    }
    sliced[strlen(sliced)-1] = '\0';
    puts(sliced);
}

int main(){
    char string[100];
    int n, m;
    printf("Please enter string: ");
    gets(string);
    printf("Please enter starting index: ");
    scanf("%d", &n);
    printf("Please enter ending index: ");
    scanf("%d", &m);
    printf("Sliced array: ");
    slice(string, 2, 5);
    return 0;
}
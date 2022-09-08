#include <stdio.h>

// gcc compiler takes arguments from right to left.
// expected output was 3 4 4. But that is considering left to right so that's wrong for gcc compiler.

int main(){
    int a = 3;
    printf("%d %d %d\n",a,++a,a++);
    return 0;
}
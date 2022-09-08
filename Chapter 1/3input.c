#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a);    // & means address of 'a' for compiler.
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("The sum of %d and %d is: %d", a, b, a+b);
    return 0;   // 0 means true.
}
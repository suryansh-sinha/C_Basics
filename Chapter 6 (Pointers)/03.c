#include <stdio.h>

void timesTen(int *i){
    *i *= 10;
}

int main(){
    int i = 10;
    printf("The value of i is: %d\n", i);
    timesTen(&i);
    printf("The value of i is: %d\n", i);
    return 0;
}
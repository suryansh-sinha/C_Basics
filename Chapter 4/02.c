#include <stdio.h>

int main(){
    int n = 10;
    int i = 10;
    while(i != 0){
        printf("%d x %d = %d\n", n, i, n*i);
        i--;
    }
    return 0;
}
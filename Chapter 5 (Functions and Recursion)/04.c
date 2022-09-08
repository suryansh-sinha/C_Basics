#include <stdio.h>

int fibonacci(int n){
    int t1 = 0;
    int t2 = 1;
    if(n == 1){
        return t1;
    }
    else if(n==2){
        return t2;
    }
    else{
        for(int count = 2; count <= n; count ++){
            int sum = t1 + t2;
            t1 = t2;
            t2 = sum;
        }
    }
 
    return t1;
}

int main(){
    printf("Enter number: ");
    int n;
    scanf("%d", &n);
    int term = fibonacci(n);
    printf("nth Term: %d\n", term);
    return 0;
}
#include <stdio.h>
#include <string.h>

struct vector{
    int x;
    int y;
};

struct vector sumVector(struct vector v1, struct vector v2){
    
    struct vector sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    return sum;
}

int main(){
    struct vector v1, v2;
    v1.x = 34;
    v1.y = 54;
    printf("X -> %d and Y -> %d\n", v1.x, v1.y);

    v2.x = 344;
    v2.y = 542;
    printf("X -> %d and Y -> %d\n", v2.x, v2.y);

    struct vector sum = sumVector(v1, v2);
    printf("Sum of v1 and v2 is: X -> %d; Y -> %d\n", sum.x, sum.y);

    return 0;
}
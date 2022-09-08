//Volume of cylinder, area of circle w/ user input.
#include <stdio.h>

int main(){
    /*
    int r;
    printf("Please enter radius of circle: ");
    scanf("%d", &r);
    printf("Area of circle is: %f", 3.14*r*r);
    */
    int r;
    printf("Please enter radius of cylinder: ");
    scanf("%d", &r);
    int h;
    printf("Please enter height of cylinder: ");
    scanf("%d", &h);
    printf("Volume of cylinder is: %f", 3.14*r*r*h);

    return 0;
}
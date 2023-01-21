#include <stdio.h>
#include <string.h>

struct Date{
    char day, month, year;
};

int main(){
    printf("Please enter the date in DDMMYY format: ");
    struct Date d1;
    scanf("%d%d%d", &d1.day, &d1.month, &d1.year);
    printf("The date is: %d-%d-%d",d1.day, d1.month, d1.year);
    return 0;
}
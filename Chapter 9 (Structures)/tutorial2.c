#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[40];
};

// Structure ki copy jaati hai so no change in original structure unlike arrays which get changed.
void show(struct employee pro){
    printf("Name: %s\n", pro.name);
    printf("Code: %d\n", pro.code);
    printf("Salary: %.2f\n", pro.salary);
}

int main(){
    struct employee facebook[100];   // This array contains 100 employees.

    strcpy(facebook[0].name, "Slash");
    facebook[0].salary = 150000.00;
    facebook[0].code = 0;

    strcpy(facebook[1].name, "Lucifer");
    facebook[1].salary = 1203.30;
    facebook[1].code = 69420;

    printf("Name: %s \tCode: %d \tSalary: %.2f\n", facebook[0].name, facebook[0].code, facebook[0].salary);
    show(facebook[1]);
    return 0;
}
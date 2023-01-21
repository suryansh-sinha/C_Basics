#include <stdio.h>
#include <string.h>

// By adding typedef, we dont have to write struct employee baar baar. We can use it but we can also use just emp instead of writing that repetitively.
// typedef keyword is used to create an alias name.
// We can also use it for other datatypes.
typedef struct employee{
        int code;
        float salary;
        char name[40];
    } emp;

void show(emp pro){
    printf("Name: %s\n", pro.name);
    printf("Code: %d\n", pro.code);
    printf("Salary: %.2f\n", pro.salary);
}

int main(){
    // Declaring emp and ptr;
    emp e1;
    emp *ptr;

    ptr = &e1;

    strcpy(ptr->name, "Slash");
    ptr->code = 1;
    ptr->salary = 102030.32;

    show(*ptr);

    return 0;

}
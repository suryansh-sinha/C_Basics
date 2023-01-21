#include <stdio.h>
#include <string.h>

// Structures can store multiple items of different data types.
struct employee{
        int code;
        float salary;
        char name[40];
    };  // Semicolon is important!!
// Size of this structure is 4 + 4 + 40 = 48 bits.

int main(){

    struct employee e1;
    // e1.name = "Suryansh Sinha" --> Won't work because string hai, pointer nahi.
    strcpy(e1.name, "Suryansh Sinha");  // Can also use gets().
    e1.code = 100;
    e1.salary = 34.5313;

    // Another way to initialize -->
    struct employee slash = {7, 120000.00, "Slash"};

    // Members of structure are stored in contiguous memory locations. Members mean internal variables of structures.
    struct employee *ptr;
    ptr = &slash;
    (*ptr).code = 1;    // We can access variables like this too.
    ptr->code = 101;    // This is also a valid method to change variables. The arrow operator -> is used.
    printf("Address 1: %u \t Address 2: %u\t Address 3: %u\n", ptr, ptr+1);

    // If there are 100 employees, we wont create 100 employee variables. Instead we create an array of struct.

    printf("Name: %s \tCode: %d \tSalary: %f\n", e1.name, e1.code, e1.salary);
    printf("Name: %s \tCode: %d \tSalary: %f\n", slash.name, slash.code, slash.salary);
    return 0;
    
}
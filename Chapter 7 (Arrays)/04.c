#include <stdio.h>

// Implementing multi dimensional arrays.

int main(){
    
    int n_students = 3, n_subjects = 5;

    int marks[3][5];
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            printf("Enter the marks of student %d in the subject %d",i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    // int arr[] = {1, 2, 3, 4, 5, 6}; This is valid.
    
    return 0;    
}
#include <stdlib.h>
#include <stdio.h>

int main(){

    int age = 30;
    //pointer variable
        //storing memeory address of age
    int * pAge = &age;

    double gpa = 3.4;
    double * pGpa = &gpa;

    char grade = 'A';
    char * pGrade = &grade;
    

    printf("age's memory address: %p\n", &age);
    printf(" %p\n", &pGrade);

    return 0;
}
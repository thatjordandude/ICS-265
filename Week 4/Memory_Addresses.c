#include <stdlib.h>
#include <stdio.h>

int main(){

    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    //%p stands for pointer
    //
    printf("age %p\ngpa: %p\ngrade: %p\n", &age,&gpa, &grade);//memory addresses

    return 0;
}
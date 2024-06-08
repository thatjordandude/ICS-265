#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student //captitalize 
{
    char name[50];
    char major[50];
    int age;
    double gpa;
    
};


int main(){
    struct Student student1; //created container(student1) stores all the variables
    student1.age = 23;
    student1.gpa = 3.7;

    //becase a strong of characters is technically an array... have to use strcpt() to pass into variable
    strcpy(student1.name, "John Walker");
    strcpy(student1.major, "Cyber Security");
    

    //second container whithin student struct
    struct Student student2; 
    student2.age = 21;
    student2.gpa = 3.1;

    //becase a strong of characters is technically an array... have to use strcpt() to pass into variable
    strcpy(student2.name, "Pam Hopkins");
    strcpy(student2.major, "Communications");

    //print out
    printf("\n%.2f\n", student1.gpa);
    printf("%s\n\n", student1.name);

    printf("%.2f\n", student2.gpa);
    printf("%s\n\n", student2.name);

    return 0;
}
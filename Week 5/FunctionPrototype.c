#include <stdio.h>


void hello(char[], int);//function prototype

//function decleration without a body, before the main function
//ensures that calls to a function will be with the correct argument

int main(){
    char name[] = "John";
    int age = 20;

    hello(name, age);
    return 0;
}   

void hello(char name[], int age){

    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}

#include <stdio.h>

void sayHi(){
    printf("%s %s", "Hello", "User");
}

void func_with_parameter(char name[]){
    printf("\nYour name is %s\n", name);
}

void lname_age(char name[], int age){
    printf("\nHello Mr. or Mrs. %s, You are %d years old\n", name, age);
}


int main()
{

    sayHi();
    func_with_parameter("mike");
    func_with_parameter("Tom");
    func_with_parameter("Sarah");
    lname_age("Smith", 45);
    return 0;
}

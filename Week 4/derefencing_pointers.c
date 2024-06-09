#include <stdio.h>
#include <stdlib.h>

int main(){
    int age = 30;
    int *pAge = &age;

    printf("%p\n\n", pAge);

    //dereferncing pointer(age) variable
    printf("%d\n\n", *pAge);
    //dereferncing into referencing into dereferncing into referencing pointer(age) variable
    printf("%p\n", &*&*pAge);

    return 0;
}
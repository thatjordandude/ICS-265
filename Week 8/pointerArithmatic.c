// C program to illustrate Pointer Arithmetic
/*
The Pointer Arithmetic refers to the legal or valid arithmetic operations that can be performed on a pointer. 
It is slightly different from the ones that we generally use for mathematical calculations as only a limited 
set of operations can be performed on pointers. These operations include:

Increment in a Pointer
Decrement in a Pointer
Addition of integer to a pointer
Subtraction of integer to a pointer
Subtracting two pointers of the same type
Comparison of pointers of the same type.
Assignment of pointers of the same type.*/


#include <stdio.h>

int main()
{

    // Declare an array
    int v[3] = { 10, 100, 200 };

    // Declare pointer variable
    int* ptr;

    // Assign the address of v[0] to ptr
    ptr = v;

    for (int i = 0; i < 3; i++) {

        // print value at address which is stored in ptr
        printf("Value of *ptr = %d\n", *ptr);

        // print value of ptr
        printf("Value of ptr = %p\n\n", ptr);

        // Increment pointer ptr by 1
        ptr++;
    }
    return 0;
}
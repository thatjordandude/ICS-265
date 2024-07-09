// C Program to access array elements using pointer
/*
In C programming language, pointers and arrays are closely related.

 An array name acts like a pointer constant. The value of this pointer constant is the address of the first element. 
 
 For example, if we have an array named val then val and &val[0] can be used interchangeably.
If we assign this value to a non-constant pointer of the same type, then we can access the elements of the array using this pointer.*/

#include <stdio.h>

void geeks()
{
    // Declare an array
    int val[3] = { 5, 10, 15 };

    // Declare pointer variable
    int* ptr;

    // Assign address of val[0] to ptr.
    // We can use ptr=&val[0];(both are same)
    ptr = val;

    printf("Elements of the array are: ");

    printf("%d, %d, %d", ptr[0], ptr[1], ptr[2]);

    return;
}

// Driver program
int main()
{
    geeks();
    return 0;
}
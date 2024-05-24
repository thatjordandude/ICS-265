#include <stdio.h>


int main()
{
    printf("hello world\n");
    
    //format specifier


    //interger
    printf("%d", 500);
    printf("\nMy favorite number is %d \n",50);


    //string
    printf("%s", "string");

    printf("\n");

    //together
    printf("My %s is %d", "age", 20);

    printf("\n");

    //double
    printf("%f",500.65456);

    printf("\n");

    int favenum = 90;
    printf("My %s is %d \n", "age", favenum);

    //character

    printf("%c \n", 'a');

    return 0;
}
#include <stdio.h>

int main()
{

    int x = 5, y = 6, z = 50;
    printf("%d", x + y + z);


    printf("\n");

    
    x = y = z = 50;
    printf("%d", x + y + z);

    printf("\n");


    // Create integer variables
    int length = 4;
    int width = 6;
    int area;

    // Calculate the area of a rectangle
    area = length * width;

    // Print the variables
    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area of the rectangle is: %d", area);




    return 0;
};
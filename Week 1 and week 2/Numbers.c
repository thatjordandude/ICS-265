#include <stdio.h>


int main() 
{


    printf("%f", 8.9);
    printf("\n");
    //math with a floating point will return floating point
    printf("%f", 4 + 5.25);
    printf("\n");
    //will return interger if specified with %d
    printf("%d", 3 / 5);
    printf("\n");
    
    int num = 6;
    printf("%d", num);

    printf("\n\n");
    
    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n\n", myFloatNum);   // Only show 4 digits 

    //QUICK FUNCTIONS
        //x to the power of y
    printf("This is 2 to the power of 3: %f", pow(2, 3));printf("\n");
        //Square root
    printf("The squre root of 36 is %f", sqrt(36));
        //ceil() rounds up
        //floor() rounds down






  return 0;
}
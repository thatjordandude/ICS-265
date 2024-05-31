#include <stdbool.h>// Import the boolean header file 

#include <stdio.h>

/*boolean values are returned as integers:

1 (or any other number that is not 0) represents true
0 represents false
Therefore, you must use the %d format specifier to print a boolean value*/
int main(){
    bool isProgrammingFun = true;
    bool isFishTasty = false;
    printf("%d\n", isProgrammingFun);  // Returns 1 (true)
    printf("%d\n", isFishTasty);         // Returns 0 (false)


    printf("\n%d\n", 10 > 9);  // Returns 1 (true) because 10 is greater than 9

    int x = 10;
    int y = 9;
    printf("\n%d\n", x > y); //will return 1

    printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
    printf("%d\n", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55

    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;

    // Find out if both hamburger and pizza is tasty
    printf("%d\n", isHamburgerTasty == isPizzaTasty);
    printf("%d\n", isHamburgerTasty != isPizzaTasty);
    return 0;




}
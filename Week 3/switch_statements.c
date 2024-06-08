#include <stdio.h>
#include <ctype.h> // For toupper function

int main(){

    char grade;
    puts("Enter your grade: ");
    scanf(" %c", &grade); // Note the space before %c to skip any leading whitespace


    // Convert the input character to uppercase
    grade = toupper((unsigned char) grade);

    switch (grade)
    {
    case 'A':
        puts("You did great!");
        break;
    case 'B':
        puts("You did Good!");
        break;
    case 'C':
        puts("You did Average!");
        break;
    case 'D':
        puts("You did Poor!");
        break;
    case 'F':
        puts("You failed");
        break;
    default:
        break;
    }


    return 0;

}
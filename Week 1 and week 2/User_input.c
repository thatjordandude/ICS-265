#include <stdio.h>

int main()
{
    //creat a variable to store input
    int age;
    double gpa;
    //prompt
    printf("Enter in your age: \n");

    //input
    //what type of input and where to store
    //& <- pointer needed for varibale input storage
    scanf("%d", &age);

    printf("You are %d years old\n", age);

    //%lf <- double when using scanf
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %.2f\n", gpa);

    //getting a string from input
    //[] <- needs to be filled with a number to allocate 
    //memory for input
    char name[20];
    printf("Enter your name: ");
    //no "&"
    scanf("%s", name);
    printf("Your name is %s\n", name);

/*When you use scanf to read a numeric value, 
it leaves the newline character (\n) in the input buffer. 
When fgets is called after scanf, it immediately reads this 
newline character as an empty line, so it appears as if it
 skips the input. To fix this, you need to consume the newline
 character left in the buffer after the scanf call.*/

// Clear the input buffer before using fgets
    while (getchar() != '\n');

    //fgets <- grabs all line of text (including white space)
    char phrase[400];
    printf("Enter your phrase: ");
    //no "&"
    fgets(phrase, sizeof(phrase), stdin);
    //stdin = standard input
    printf("Your phrase is %s\n", phrase);

    return 0;
}
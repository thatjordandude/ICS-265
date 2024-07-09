#include <string.h>
#include <stdio.h>

int main(){
    char Fname[] = "Jordan";
    char Lname[] = "Smith";

    int result = strlen(Fname); //returns string length as an int   
    printf("First Name Length: %d\n", result);
    puts("");

    result = strcmp(Fname, Lname); //string compare all characters
    printf("Comparison Result: %d\n", result);
    puts("");

    result = strcmp("Hello", "Hello"); //string compare all characters
    printf("2nd Comparison Result: %d\n", result); //same so outputs 0 
    puts("");

    result = strncmp("Bro", "Bob", 1); //string compare n characters
    printf("3rd Comparison Result: %d\n", result); 
    puts("");

    //strcompi     string compare all (ignore case)
    //strnicmp     string compare n characters (ignore case)

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to convert a string to lowercase
void strlwr(char *str) {
    while (*str) {
        *str = tolower((unsigned char) *str);
        str++;
    }
}

// Function to convert a string to uppercase
void strupr(char *str) {
    while (*str) {
        *str = toupper((unsigned char) *str);
        str++;
    }
}

int main() {
    char string1[100] = "Jordan";  // Increased buffer size to accommodate concatenations
    char string2[] = "Smith";

    strlwr(string1); // converts string1 to lowercase
    printf("%s", string1);
    printf("\n");

    strupr(string1); // converts string1 to uppercase
    printf("%s", string1);
    printf("\n");

    strcat(string1, string2); // appends string2 to the end of string1
    printf("%s", string1);
    printf("\n");

    strncat(string1, string2, 1); // appends 1 character from string2 to string1
    printf("%s", string1);
    printf("\n");

    strcpy(string1, string2); // copy string2 to string1
    printf("%s", string1);
    printf("\n");

    strncpy(string1, string2, 4); // copy 4 characters of string2 to string1
    string1[4] = '\0';  // Ensure null-termination
    printf("%s", string1);
    printf("\n");




/*Your code aims to demonstrate various string operations in C. However, strset, strnset, and strrev are not standard C functions. These functions are available in some environments like MSVC (Microsoft Visual C++), but they are not part of the standard C library. Therefore, using them can lead to portability issues.

To ensure the code is portable and works across different environments, you can write your own implementations for strset, strnset, and strrev.*/
    // strset(string1, '?'); //sets all characters of a string to a given character
    // printf("%s", string1);
    // printf("\n");

    // strnset(string1, 'x', 1); // sets first n characters of a string to a given character
    // printf("%s", string1);
    // printf("\n");

    // strrev(string1); //reverses the string
    // printf("%s", string1);
    // printf("\n");


    return 0;
}

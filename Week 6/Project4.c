#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void printRow(FILE *f, const char *City){
    char line[1000];  
    char firstWord[1000];  

    // Read the file line by line
    while (fgets(line, sizeof(line), f)) {

        // Extract the first word from the line
        sscanf(line, "%s", firstWord);

        // Compare the first word with the matchString
        if (strcmp(firstWord, City) == 0) {
            printf("%s", line);
            break;
            }
    }
}
int main(){

    FILE* f = fopen("EqData.txt", "r");
    if (NULL == f) {
        printf("file can't be opened \n");
        return EXIT_FAILURE;
    }

    
    puts("The following is the historic data of minnesota earthquakes\n");
    char ch;
    while ((ch = fgetc(f)) != EOF) {
        putchar(ch);
    }

    rewind(f);

    char City[100];
    puts("\nWhich city would you like to display?\nEnter the city name:");
    scanf("%s", City);

    
 
    printRow(f, City);



    fclose(f);
    return 0;
}
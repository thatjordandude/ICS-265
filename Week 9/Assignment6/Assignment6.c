#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *eqFile = fopen("C:\\Users\\kapta\\OneDrive\\Documents\\GitHub\\ICS-265\\Week 9\\Assignment6\\significant_month.csv", "r");
    if (eqFile == NULL) {
        printf("Error opening File.\n");
        return 1;
    }
    puts("File successfully opened.\n");
    puts("================================================");

    
    char line[1024];
    char *data;

    //first line
    fgets(line, sizeof(line), eqFile);
    // printf("%s", line);

    double sum = 0.0;
    int count = 0;
  
    
    while(fgets(line, sizeof(line), eqFile)){


            //parsing

            data = strtok(line,",");
            printf("Time: %s\n", data);
            data = strtok(NULL,",");
        
            double magnitude = atof(data); // Convert 

            //statistics
            sum += magnitude;
            count++;

            printf("Magnitude: %.2f\n", magnitude);


            data = strtok(NULL,",");
            printf("Cost: $%s\n", data);
            data = strtok(NULL,",");
            printf("Place: %s\n", data);

            printf("====================\n");

    }
    double average = sum / count;

    printf("\nUSGS  -  Earthquake Statistics  -  2024\n");
    printf("Magnitude Statistics:\nSum: %.2f\nCount: %d\nAverage: %.2f\n", sum, count, average);



    fclose(eqFile);
    puts("Author:Jordan Nguyen\n Date:20240802");
    return 0;

}
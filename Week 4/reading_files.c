#include <stdio.h>
#include <stdlib.h>

int main(){
   
    char line[255];
    FILE *fpointer = fopen("/home/jordan/Documents/GitHub/ICS-265/Week 4/employees.txt", "r");

    //fgets(where to store info, size, file pointer)
    fgets(line, sizeof(line), fpointer);
    printf("%s", line);
    fgets(line, sizeof(line), fpointer); //stores line 2
    printf("%s", line);

    for (int i = 0; i < 5; i++)
    {
        fgets(line, sizeof(line), fpointer);
        printf("%s", line);
    }
    


    fclose(fpointer);
    return 0;
}
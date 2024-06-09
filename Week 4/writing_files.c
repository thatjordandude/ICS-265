#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //create pointer to file
    FILE *fpointer = fopen("/home/jordan/Documents/GitHub/ICS-265/Week 4/employees.txt", "w"); 
    //fopen(name, file mode (r=read, w=write, a=append)) append adds onto end of file

    fprintf(fpointer, "Sophia Martinez, Senior Marketing Manager\nLiam Johnson, Software Development Engineer\nAvery Kim, Financial Analyst\nJordan Patel, Human Resources Director\n");
    //print onto file fprintf(location, output)




    //make sure to close file
    fclose(fpointer); //pass in created memory address (fpointer in this case)
    return 0;
}
#include <stdlib.h>
#include <stdio.h>

int main(){
    int index = 1;
    // int index2 = 1;


    while (index <= 10)
    {
        printf("%i\n", index);
        index++;
    }

    puts("\nEnd");

    do // do while loop
    {
        puts("\nThis is do while loop, doing before the condition");
        printf("%i\n\n", index);
        
    } while (index <= 10);
    
    

    





    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){

    //arrayception
        //specify the amount of arrays and elements within
    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    printf("%d\n", nums[2][1]);

    puts("Break__----------___\n");
    //Nested for loops

    int i, j;
    for (i = 0; i < 3; i++)
    {for (j = 0; j < 2; j++){
            printf("%d, ", nums[i][j]);
        }

        puts("\n");
    }
    



    return 0;
}


#include <stdio.h>

int main()
{

    int luckyNumbers[] = {4, 1, 3 ,16, 18, 15, 9, 7}; //"[]" <- array symbol
    int emptyArray[10]; //can only hold 10 elements
    printf("%d\n", luckyNumbers[0]);

    luckyNumbers[0] = 200;
    printf("%d\n", luckyNumbers[0]);

    emptyArray[0] = 1;
    printf("%d\n", emptyArray[1]);
    emptyArray[1] = 55;
    printf("%d\n", emptyArray[1]);


    


    return 0;
}
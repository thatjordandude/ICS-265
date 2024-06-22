#include <stdio.h>

int main(){
    int rows;
    int cols;
    char symbol;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    puts("Number of of columns: ");
    scanf("%d", &cols);

    puts("Enter symbol: ");
    scanf(" %c", &symbol);

    for(int i = 0; i < rows; i++){
        puts("");
        for(int j = 0; j < cols; j++){
            printf("%c", symbol);
        }
    }


    return 0;
}
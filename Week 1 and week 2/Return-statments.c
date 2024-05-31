#include <stdio.h>

//protyping the function
double cube_num(double num);

int main(){
    double num;
    
    puts("Enter number to be cubed");
    scanf("%lf", &num);
    printf("%f cubed is %f", num, cube_num(num));

    return 0;
}

double cube_num(double num){
    
    return num * num * num;;
}
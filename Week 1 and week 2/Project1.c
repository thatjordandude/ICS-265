#include <stdio.h>

int main(){
    float loan = 0.0;
    float interest = 0.0;
    int years = 0;

    puts("Enter loan amount: ");
    scanf("%f", &loan);
    printf("Loan amount: %.2f", loan);
    puts("\nEnter years: ");
    scanf("%d", &years);

    puts("Enter interest rate <5/10/15/20/25/30>: ");
    scanf("%f", &interest);

    if (years > 0){
        loan += (loan*interest/100*years);
        printf("Your loan plus your interest is: %.2f\n", loan);
    }else{
        printf("%d Years must be a postiive interger", years);
    }
puts("By: Jordan Nguyen, June 1, 2024");
    return 0;

}
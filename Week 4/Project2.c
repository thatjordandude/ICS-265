//Program developed by Sam Espana
//Program enhanced by Jordan Nguyen
//Date: Saturday, 6/15/24
#include <stdio.h>

int main() {
    int count = 0;
    double number, sum, mean = 0;
//Using Do/While to calculate sum, count, and mean




// printf("Using a Do/While to calculate statistics\n");
// do {
// printf("Enter a positive number: ");
// scanf("%lf", &number);
// if (number >0){
// sum += number;
// count +=1;
// mean = sum/count;
// }

    // Using While loop to calculate sum, count, and mean
    printf("Using a While loop to calculate statistics\n");

    printf("Enter a positive number: ");
    scanf("%lf", &number);

    while (number > 0.0) {
        sum += number;
        count++;
        mean = sum / count;

        printf("Enter a positive number: ");
        scanf("%lf", &number);
    }

    printf("Sum = %.2lf \n", sum);
    printf("Count = %d \n", count);
    printf("Mean = %.2lf \n", mean);
    printf("Thank you!\n");

    return 0;
}
#include <stdio.h>

int main() {
  float sum = 5 / 2;

  printf("%f\n\n", sum);  // 2.000000
  // 5 and 2 are still integers in the division. In this case, you need to manually convert the integer values to floating-point values. (see below).


  // Manual conversion: int to float
   sum = (float) 5 / 2;

  printf("%f\n\n", sum);

//or this works
  int num1 = 5;
  int num2 = 2;
   sum = (float) num1 / num2;

  printf("%f\n\n", sum);

  printf("following is a real life example\n");

    // Set the maximum possible score to 500
  int maxScore = 500;

  // The actual score of the user
  int userScore = 423;

  // Calculate the percantage of the user's score in relation to the maximum available score
  float percentage = (float) userScore / maxScore * 100.0;

  // Print the percentage
  printf("User's percentage is %.2f", percentage);


  return 0;
}
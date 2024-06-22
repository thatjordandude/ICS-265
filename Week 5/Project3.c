#include <stdio.h>
//Program enhanced by Jordan Nguyen
//Date: 22/6/24
// Function prototypes

int input();
void output(float);
float areaofCircle(int radius);

float areaofSquare(int side);

float areaofSphere(int radius);

// driver code
int main(){
    float result;
    int choice, num;
    // printing menu
    printf("Press 1 to calculate area of circle\n");
    printf("Press 2 to calculate area of square\n");
    printf("Press 3 to calculate area of sphere\n");
    printf("Enter your choice:\n");

    // taking input
    choice = input();

    // switch statement to print output according to the
    // choice
    switch (choice) {
    case 1: {
    printf("Enter radius:\n");
    num = input();
    result = areaofCircle(num);
    printf("Area of circle = ");
    output(result);
    break;
    }

    case 2: {
    printf("Enter side of square:\n");
    num = input();
    result = areaofSquare(num);
    printf("Area of square = ");
    output(result);
    break;
    }

    case 3: {
    printf("Enter radius:\n");
    num = input();
    result = areaofSphere(num);
    printf("Area of sphere = ");
    output(result);
    break;
    }

    default:
    printf("wrong Input\n");
    }


    printf("\nProgram enhanced by Jordan Nguyen\n");
    return 0;
}
// function to take input
int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}

// function to print output
void output(float number) { printf("%f", number); }

//Area of a circle
float areaofCircle(int radius)
{
    return radius*radius*3.14;
}

//Area of a square
float areaofSquare(int side){
    return side*side;
}

//Area of a sphere
float areaofSphere(int radius){
    return 4*3.14*radius*radius;
}
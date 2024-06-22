#include <stdio.h>

int main(){
    const double PI = 3.141592653589793;

    double radius;
    double cirum;
    double area;


    puts("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    cirum = 2 * PI * radius;

    area = PI * (radius * radius);

    printf("The circumference of the circle is %lf", cirum);
    puts("\n");
    printf("The area of the circle is %lf", area);
    return 0;
}
#include <stdio.h>

int main(){
    double num1;
    double num2;
    char op;

    puts("Enter a numebr: ");
    scanf("%lf", &num1);
    puts("Enter operator (+, -, *, /):");
    //put "white space" before %c
    scanf(" %c", &op);
    puts("Enter second number: ");
    scanf("%lf", &num2);

    if (op == '+')
    {
        printf("%f", num1 +num2);
    }
    else if (op == '-')
    {
        printf("%f", num1 - num2);
    }
    else if (op == '*')
    {
        printf("%f", num1 * num2);
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            puts("Cannot divide by 0");
            
            
        }else{printf("%f", num1 / num2);}
        
        
    }else{puts("Invalid operator");}
    
    

    return 0;
}
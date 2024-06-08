#include <stdio.h>

int max(int num1, int num2, int num3){
    int result;
    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }else{result = num3;}
    
    return result;
}

int main(){
    int num1;
    int num2;
    int num3;
    puts("Enter 3 numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    printf("%d", max(num1, num2, num3));

    return 0;
}
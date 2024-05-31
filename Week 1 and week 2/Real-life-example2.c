#include <stdio.h>

int main() {

    int myAge;
    int votingAge = 18;

    puts("Enter your age:");
    scanf("%d", &myAge);

    if (myAge >= votingAge){
        puts("You are old enough to vote");
    }else {
        puts("You are not old enough to vote");
    }




    return 0;
}
#include <stdio.h>

int main(){

    //collection of characters needs "[]" <- fill with mem allocation (character amount)
    char color[20];
    char pluralNoun[20];
    char celebrity[20];
    char peen1[20];
    char peen2[20];

    puts("Enter a color");
    scanf("%s", color);

    puts("Enter a plural noun");
    scanf("%s", pluralNoun);

    while (getchar() != '\n');
    puts("Enter a celebrity");
    fgets(celebrity, 20, stdin);

    puts("Enter a peen description (2 words): ");
    scanf("%s%s", peen1, peen2);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s",celebrity);
    printf("suck my little %s %s\n", peen1, peen2);

    return 0;

}
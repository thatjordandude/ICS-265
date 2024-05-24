#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("George was 40\nGeorge liked to play baseball\nGeorge had a dog named Toby\nToby was a good and happy dog\nGeorge liked his name George\n\n");

    //Variables:
    char character_name[] = "John";
    char dog_name[] = "Sport";
    int character_age = 25;



    printf("%s was %d\n%s liked to play baseball\n%s had a dog named Toby\n"
    ,character_name,character_age,character_name,character_name);

    char character_name2[] = "George";
    printf("%s was a good and happy dog\n%s liked his name %s\n"
    ,dog_name,character_name2,character_name2);

    return 0;
}

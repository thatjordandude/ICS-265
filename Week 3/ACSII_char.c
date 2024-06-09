#include <stdio.h>
/*ou can use ASCII values to display certain characters. 
Note that these values are not surrounded by quotes (''), as they are numbers:*/
int main() {
  char a = 65, b = 66, c = 67;
  printf("%c\n", a);
  printf("%c\n", b);
  printf("%c", c);
  return 0;
}
#include <stdio.h>

int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;
    /*Note that we use the %lu format specifer 
    to print the result, instead of %d. It is because 
    the compiler expects the sizeof operator to return 
    a long unsigned int (%lu), instead of int (%d).
     On some computers it might work with %d, 
     but it is safer to use %lu.*/
  printf("%lu\n", sizeof(myInt));
  printf("%lu\n", sizeof(myFloat));
  printf("%lu\n", sizeof(myDouble));
  printf("%lu\n", sizeof(myChar));
  //Returns the size in bytes
  return 0;
}
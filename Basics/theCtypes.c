#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(void) {
  char a = 'a';
  short int tiny = 2;
  int i = 21474837;//2147483647 max limit
  float  k = 45.5; //2bytes
  double l= 755555.5; //4bytes
  long double m = 77777777777777.5;
  printf("this is a char-> %c\n", a);
  printf("this is an int-> %i\n", i);

  return 0;
}

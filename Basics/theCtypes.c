#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(void) {
  char a = 'a';
  short int tiny = 2;//2bytes
  int i = 21474837;// 4 bytes 32bits max limit
  float  k = 45.5; //4 bytes
  double l= 755555.5; //8 bytes 64bit max limit
  long double m = 77777777777777.5;// 8 bytes
  printf("this is a char-> %c\n", a);
  printf("this is an int-> %i\n", i);

//---------------type casting-----------------------
  printf("\n\n\n\n\tType casting\n");
  double var1 = 2;
  double var2 = 3;
  double div1 = 3 / (double)2;//passing int to double
  printf("%f\n",div1);
  int sum = (int)div1 +  4;//passing double to int
  printf("%i\n",sum);

  return 0;
}

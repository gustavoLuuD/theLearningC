#include <stdio.h>
#include <stdlib.h>

int main(void){
  int a = 10;
  int *ap = &a;

  printf("%i\n", ap);
  printf("%i\n", *ap);
  printf("%d\n", a);
  return 0;
}

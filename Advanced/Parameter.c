#include <stdio.h>
#include <stdlib.h>

void function(int *a, int b){
  *a = *a +1;
  b = b + 1;
  printf("\n(%p) (%i) (%i)\n",a, *a, b);
}

int main(void){
  int a = 0, b = 0;
  function(&a, b);
  printf("(%i) (%i)\n",a, b);

  return 0;
}

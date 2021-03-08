#include <stdio.h>

int main(void){
  int x = 10;
  int *a = &x;//o ponteiro a recebe o endereço de memória de x

  printf("%i\n",x);//valor de x
  printf("%p\n",&x);//printamos o endereço de memória de x
  printf("%p\n",a);//printamos o endereço de memória que a aponta
  printf("%p\n",&a);//printamos o endereço de memoria de a
  printf("%i\n",*a);//printamos o valor apontado por a
  return 0;
}

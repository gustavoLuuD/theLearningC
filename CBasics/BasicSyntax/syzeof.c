#include <stdio.h>
  int main(int argc, char *argv[]){
  int a = sizeof(char),
  b = sizeof(int),
  c = sizeof(double),
  d = sizeof(float);

  printf("tamanhos: char: %i \n", a);
  printf("tamanhos: int: %i  \n", b);
  printf("tamanhos: double: %i  \n", c);		//doubles terão o dobro do tamanho do float obviamente
  printf("tamanhos: float: %i  \n", d);

  return 0;
}

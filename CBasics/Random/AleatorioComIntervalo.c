#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  srand( (unsigned)time(NULL) );//adicionando uma seed
  int a = 1 + (rand() % 10);
  int b = 1 + (rand() % 21);
  printf("Geramos um numero de 1 a 10: %d\n",a);
  printf("Geramos um numero de 1 a 21: %d\n",b);

  return 0;
}

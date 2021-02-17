#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  printf("Gerando 10 valores aleatorios\n");
  printf("intervalo da rand: [0,%d]\n", RAND_MAX);
  srand( (unsigned)time(NULL) );//adicionando uma seed
  for(int i=1 ; i <= 10 ; i++)
      printf("Numero %d: %d\n",i, rand());
  return 0;
}

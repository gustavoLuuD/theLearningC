#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
  char nome[100];
  printf("Digite seu nome:");
  scanf("%s", nome);

  printf("Seu nome eh %s", nome);
  return 0;
}

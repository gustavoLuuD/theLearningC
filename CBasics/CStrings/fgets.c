#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char nome[100];
  printf("Digite seu nome\n");
  fgets(nome, 100, stdin);//leitura da string
  int tam = strlen(nome);
  printf("Seu nome eh: %s\n",nome);
  printf("Sua string tem %i letras\n",tam - 1);//decrementamos o /0
  return 0;
}

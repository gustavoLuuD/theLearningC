#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_QUANTITY 10
void escrevePalavras(char **matriz);
void mostraPalavras(char **matriz);
int main(){
  //criamos ponteiro para um array de strings
  char **matriz;
  matriz=(char**)malloc(sizeof(char*)*MAX_INPUT_QUANTITY);
  for(int i=0; i < MAX_INPUT_QUANTITY; i++)
  matriz[i]=(char*)malloc(sizeof(char)*80);

  escrevePalavras(matriz);
  mostraPalavras(matriz);
  free(matriz);
  return 0;
}

void escrevePalavras(char **matriz){
  for(int i = 0; i < MAX_INPUT_QUANTITY; i++){
    printf("Escreva algo ->\n");
    scanf(" %[^\n]s",matriz[i]);
  }
}
void mostraPalavras(char **matriz){
  for(int j = 0; j < MAX_INPUT_QUANTITY; j++){
    printf("Input %d ->%s\n",j ,matriz[j]);
  }
}

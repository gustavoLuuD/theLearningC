#include <stdlib.h>
#include <stdio.h>

typedef struct Celula{
    int elemento;
    struct Celula *prox;
}Celula;

Celula *novaCelula(int elemento){
  Celula *nova = (Celula*)malloc(sizeof(Celula));
  nova->elemento = elemento;
  nova->prox = NULL;
  return nova;
}
//------------Fila-------------
Celula *primeiro, *ultimo;
void start(){
  primeiro = novaCelula(-1);
  ultimo = primeiro;
}
void insert(int x){
  ultimo->prox = novaCelula(x);
  ultimo = ultimo->prox;
  printf("Inserted %d",ultimo->elemento);
}
int removeelement(){
    if(ultimo == primeiro){
      exit(1);
    }
    Celula *aux = primeiro;
    primeiro = primeiro->prox;
    int removido = primeiro->elemento;
    aux->prox = NULL;
    free(aux);
    aux = NULL;
    return removido;
}
void printqueue(){
  int contador = 0;
  Celula *i = primeiro->prox;
  while(i != NULL){
    printf("%d - %d, ",contador, i->elemento);
    i = i->prox;
    contador++;
  }
}
//-----------------------------


int main(void){
  start();
  insert(4);
  insert(5);
  insert(6);
  int removed = removeelement();

  printf("%d was removed\n", removed);
  printqueue();
  return 0;
}

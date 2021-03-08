#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100

typedef struct{
  int codigo;
  char nome[100];
}Cliente;

int main(void){
   Cliente jhon;
  char* p = (char*)malloc(sizeof(char));
  int* p2 = (int*)malloc(sizeof(int));
  double* p3 = (double*)malloc(sizeof(double));
  Cliente* p4 = (Cliente*)malloc(sizeof(Cliente));
  int* p5 = (int*) malloc((MAXTAM) * sizeof(int));//array de inteiros


  free(p);
  free(p2);
  free(p3);
  free(p4);
  free(p5);
  return 0;
}

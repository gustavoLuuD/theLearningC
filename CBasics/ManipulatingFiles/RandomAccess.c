#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *f = fopen("teste.txt","wb");
  int registro, valor,i;
  for(i = valor = 0; i < 10; i++, valor = i * 10)
    fwrite(&valor, sizeof(int), 1, f);
  int numRegistro = ftell(f)/sizeof(int);

  do{
    printf("\n Escolha um numero entre zero e %i ",numRegistro - 1);
    scanf(" %d",&registro );
  }while(registro < 0 || registro >= numRegistro);

  fseek(f, registro * sizeof(int),SEEK_SET);
  fread(&valor,sizeof(int),1,f);
  fclose(f);
  printf("\nValor: %d\n",valor);

  return 0;
}

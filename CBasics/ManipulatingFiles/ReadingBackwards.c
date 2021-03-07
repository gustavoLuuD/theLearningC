#include <stdio.h>
#include <stdlib.h>

void escreverValores(int quant, char *filePath);
void leAoContrario(int quant, char *filePath);
//funcao principal do programa
int main(){
  int quant;
  scanf("%d",&quant);
  escreverValores(quant, "arquivo.bin");
  leAoContrario(quant,"arquivo.bin");
}

//funcao de escrita de todos os valores
void escreverValores(int quant, char *filePath){
  FILE *raff = fopen(filePath, "wb");
  if(raff == NULL){//checagem de erro na abertura
    printf("Impossivel abrir o arquivo");
    exit(0);
  }
  else{
    double valor;
    for(int i = 0; i < quant; i++){
      scanf(" %lf",&valor);
      fwrite(&valor,sizeof(double), 1, raff);
    }
    fclose(raff);
  }
}

void leAoContrario(int quant, char *filePath){
  FILE *raff = fopen(filePath,"rb");
  if(raff == NULL){//checagem de erro na abertura
    printf("Impossivel abrir o arquivo");
    exit(0);
  }
  else{
    double valor;
    for(int i = quant - 1; i >= 0; i--){
      fseek(raff, i * sizeof(double), SEEK_SET);//movemos o cabecote uma posicao a tras
      fread(&valor, sizeof(double), 1,raff);
      printf("%lf\n",valor);
    }
    fclose(raff);
  }
}

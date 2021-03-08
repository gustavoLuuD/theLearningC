#include <stdio.h>
#include <stdlib.h>

void populaArray(int* p, int quant_elementos){
    for(int i = 0;i < quant_elementos; i++){
      printf("Insira um valor -> ");
      scanf(" %d",&p[i]);
    }
}

void mostraArray(int* p, int quant_elementos){
  for(int i = 0; i < quant_elementos; i++){
    printf("Valor %d -> %d\n",i, p[i]);
  }
}

int main(){
  int *p;//ponteiro para o vetor
  int i;
  int quant_elementos = 5;

  //alocando o array dinamicamente
  p = (int *)(malloc(quant_elementos * sizeof(int)));

  if(p == NULL){
    printf("Erro de alocacao de memoria\n");
    system("pause");
    exit(1);
  }

  populaArray(p, quant_elementos);
  mostraArray(p, quant_elementos);
  
  //desalocamos a memória alocada
  free(p);
  return 0;
}

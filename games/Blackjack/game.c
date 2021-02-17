#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
/*
  naipes
  1 - paus
  2 - ouros
  3 - copas
  4 - espadas

  numero de cartas 1 - 13
*/
typedef struct{
  int naipe;
  int valor;
  bool emJogo;
}Carta;

void mostraCarta(int carta);
int sorteiaCarta(void);
bool checaDesqualificacao(int pontos);
void mostraResultado(int pontos);

int main(void){
  srand((unsigned)time(NULL));//geramos uma seed
  int pontos = 0;
  char escolha;
  do{
    int cartaAtual = sorteiaCarta();
    pontos += cartaAtual;
    printf("seus pontos: %d\n", pontos);

    if(checaDesqualificacao(pontos) == false){
      printf("%Pressione h para pedir mais uma ou s para ficar \n");
      scanf(" %c", &escolha);
    }
  }while(checaDesqualificacao(pontos) == false && escolha == 'h');
  mostraResultado(pontos);
  return 0;
}

int sorteiaCarta(void){
  return 1 + (rand()%13);
}

void mostraCarta(int carta){
  printf("Sua carta: ");
  if(carta == 1)
    printf("A\n");
  else if(carta == 11)
    printf("J\n");
  else if(carta == 12)
    printf("Q\n");
  else if(carta == 13)
    printf("K\n");
  else
  printf("%d\n",carta);
}

bool checaDesqualificacao(int pontos){
  bool desqualificado;
  if(pontos > 21)
    desqualificado = true;
  else
    desqualificado = false;
  return desqualificado;
}

void mostraResultado(int pontos){
  if(checaDesqualificacao(pontos) == true){
    printf("U luse\n");
  }
  else{
    printf("U win\n");
  }
}

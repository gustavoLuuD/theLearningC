#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int N; //numero de teclas
int Q;//quantidade de acordes


void imprimePiano(int piano[N]){
  for(int i = 0; i < N; i++){
    printf("%d\n",piano[i]);
  }
}
int getfrequencia(int piano[N], int esq, int dir){


  int frequencia[9];


  for(int i = 0; i < N; i++){ //colocamos valores de 0 a 8 no piano
    frequencia[i] = 0;
  }
  for(int j = esq; j <= dir; j++){
    frequencia[piano[j]]++;
  }
  int maior = 0;
  for(int k = 0; k <= 8; k++){
    if(frequencia[k] > maior){
      maior = k;
    }
  }

  int m = esq;
  int resp = 0;

  while(piano[m] != maior){
    if(piano[m] == maior){
        resp = piano[m];
    }
    m++;
  }
  return resp;
}
void atualiza(int piano[N], int esq, int dir){
  int f;//nota mais frequente
  f = getfrequencia(piano,esq, dir);
  for(int i = esq; i < dir; i ++){
    piano[i]+= f;
    if(piano[i] > 8){
      piano[i] -= 9;
    }
  }
}

void leentrada(){
  int n = 1000;
  int piano[N];
  int j = 1;
  for(int i = 0; i < N; i++){ //colocamos valores de 0 a 8 no piano
    if(j > 8){
      j = j - 9;
    }
    piano[i] = j;
    j++;
  }
  int esq, dir;//intervalos do acorde
  char acorde[10];

  for(int k = 0; k < Q; k ++){
    scanf(" %[0-9 ]s", acorde);
    esq = atoi(strtok(acorde, " "));
    dir = atoi(strtok(NULL, " "));
    atualiza(piano, esq, dir);

  }
  imprimePiano(piano);
}



int main(void){
  char infos[10];     //informacoes sobre o tipo de piano
  scanf(" %[0-9 ]s", infos);

  N = atoi(strtok(infos, " "));
  Q = atoi(strtok(NULL, " "));


  leentrada();
  //imprimePiano();
  return 0;
}

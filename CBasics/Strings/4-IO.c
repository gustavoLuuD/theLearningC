#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char readChar(){
  int letra;
  printf("Insira a primeira letra do seu nome: ");
  letra = getchar();
  return letra;
}

void readName(char* nome){
  printf("Digite seu nome: ");
  fgets(nome, 100, stdin);//leitura da string
  int tam = strlen(nome);
  printf("Seu nome eh: %s e tem %d letras\n",nome, tam- 1);//tiramos o \0
}

void checkPrimeiraLetra(char*nome, char letra){
  if(nome[0] == letra){
    printf("Realmente %s%c eh a primeira letra do seu nome\n",nome, letra);
  }
  else{
    printf("Claro que nao! A primeira letra do seu nome eh %c\n", nome[0]);
    printf("Vc eh bobo por acaso? >:(\n");
  }
}

void displayChar(){
  printf("Escreve um char ai campeao\n");
  char c = getchar();
  printf("Vc escreveu ");
  putchar(c);
}

int main(void){
  char nome[100];
//  readName(nome);//leitura de string feita com fgets;
//  char letra = readChar();//leitura de caractere feita com getchar
//  checkPrimeiraLetra(nome, letra);
  displayChar();
  return 0;
}

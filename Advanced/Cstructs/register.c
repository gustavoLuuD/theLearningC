#include <stdio.h>
#define MAXTAM 100

struct Aluno{
  int matricula;
  char nome[MAXTAM];
};

int main(void){
  struct Aluno a;

  printf("Insira a matricula do aluno: ");
  scanf(" %d",&a.matricula);

  printf("Insira o nome do aluno: ");
  scanf(" %[^\n]",a.nome);

  printf("Matricula do aluno: %d\n",a.matricula);
  printf("Nome do aluno: %s\n",a.nome );
}

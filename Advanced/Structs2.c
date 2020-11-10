#include <stdio.h>
#include <string.h>

struct tp_endereco{
  char rua[40];
  int numero;
  char bairro[40];
  char estado[40];
  int cep;
};

struct tp_dataNascimento{
  int dia;
  int mes;
  int ano;
};

struct cadastro_cliente{
  char nome[40];
  int telefone;

  struct tp_dataNascimento dataNascimento;
  struct tp_endereco endereco;

};
typedef struct cadastro_cliente c;
c cad_cliente[50];
int quantidadeClientes;

void printaClientes(){
  for(int i  = 0; i < quantidadeClientes; i++){
    printf("Nome..........: %s", cad_cliente[i].nome);
  }
}

int main(void){

  printf("Quantos clientes voce quer cadastrar?\n");
  scanf("%d\n",&quantidadeClientes);

  for(int i = 0; i < quantidadeClientes; i++){
    printf("\nInsira o nome-> ");
    scanf(" %s", cad_cliente[i].nome);

    printf("\nInsira o dia de nascimento-> ");
    scanf("%i", &cad_cliente[i].dataNascimento.dia);
    printf("\nInsira o mes de nascimento-> ");
    scanf("%i", &cad_cliente[i].dataNascimento.mes);
    printf("\nInsira o ano de nascimento-> ");
    scanf("%i", &cad_cliente[i].dataNascimento.ano);
    printaClientes();
  }

  return 0;
}

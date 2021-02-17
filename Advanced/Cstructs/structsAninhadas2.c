#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco{
  char rua[40];
  int numero;
  char bairro[40];
  char cidade[40];
  char estado[3];
  int cep;
};

struct data_nascimento{
  int dia;
  int mes;
  int ano;
};

struct cadastro_cliente{
  char nome[40];
  int telefone;
  struct data_nascimento data_nascimento_cliente;
  struct endereco endereco_cliente;
}cadastro_cliente[2];

void cadastraCliente(struct cadastro_cliente* c);
void mostraCliente(struct cadastro_cliente* c);


int main(void){
  for(int i = 0; i < 2; i++){
    cadastraCliente(&cadastro_cliente[i]);
    mostraCliente(&cadastro_cliente[i]);
  }

  return 0;
}

void cadastraCliente(struct cadastro_cliente* c){
  fflush(stdin);
  printf("\nNome do cliente: ");
  gets(c->nome);

  printf("\nTelefone de contato: ");
  scanf(" %d",&c->telefone);

  printf("\nDia de nascimetno: " );
  scanf(" %d",&c->data_nascimento_cliente.dia);

  printf("\nMes de nascimetno: " );
  scanf(" %d",&c->data_nascimento_cliente.mes);

  printf("\nAno de nascimento: " );
  scanf(" %d",&c->data_nascimento_cliente.ano);

  printf(" \t-- Cadastro de endereco --\n");
  printf("\nRua do cliente: ");
  scanf(" %[^\n]",c->endereco_cliente.rua);

  printf("\nNumero do cliente: ");
  scanf(" %d",&c->endereco_cliente.numero);

  printf("\nBairro de residencia: ");
  scanf(" %[^\n]",c->endereco_cliente.bairro);

  printf("\n Cidade de residencia: ");
  scanf(" %[^\n]",c->endereco_cliente.cidade);
  printf("\nEstado de residencia: ");
  scanf(" %[^\n]",c->endereco_cliente.estado);

  printf("\n Cep do cliente: ");
  scanf(" %d", &c->endereco_cliente.cep);
  fflush(stdin);
}

void mostraCliente(struct cadastro_cliente* c){
  printf("Cliente: %s \n", c->nome);
  printf("Telefone: %d \n", c->telefone);
  printf("Data de nascimento : %d/%d/%d \n",c->data_nascimento_cliente.dia,
   c->data_nascimento_cliente.mes, c->data_nascimento_cliente.ano);
  printf("Rua: %s\n",c->endereco_cliente.rua);
  printf("Bairro: %s\n",c->endereco_cliente.bairro);
  printf("Cidade: %s\n",c->endereco_cliente.cidade);
  printf("Estado: %s\n",c->endereco_cliente.estado);
  printf("Cep: %d\n",c->endereco_cliente.cep);
}

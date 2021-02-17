#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int numero;
  int cod;
}Person;
  
int main(void){
  Person a[2];
  a[0].numero = 1;
  a[0].cod = 1;

  a[1].numero = 2;
  a[1].cod = 2;

  for(int i = 0; i < 2; i++){
    printf("Numero : %i\n",a[i].numero);
    printf("Codigo : %i\n",a[i].cod);
  }
  return 0;
}

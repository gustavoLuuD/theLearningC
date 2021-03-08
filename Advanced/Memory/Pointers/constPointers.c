#include <stdio.h>

int main(){
  int x;
  int y;

  /*ptr é um ponteiro constante, o conteudo do local apontado pode mudar, mais
  o local onde ptr aponta não*/
  int * const ptr = &x;

  *ptr = 7;//permitido pois *ptr nao é constante
//  ptr = &y; //gera um erro pois ptr é constante

  printf("%p -> %d",ptr, *ptr);
  return 0;
}

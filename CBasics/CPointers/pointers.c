#include <stdio.h>
#include <stdlib.h>
//with pointers we don't need to return a value
void sum(int* a, int* b, int* sum){
  *sum = *a  + *b;

}
int show(int a){
  printf("%d\n",a);
  a++;
  printf("%d\n",a);
}

int main(void){
  int a = 10;
  int b = 2;
  int soma;
  //the character & takes the memory adress
  show(a);
  printf("%d\n",a);
  sum(&a, &b, &soma);
  printf("This is the sum: %i\n", soma);

  printf("---------------------------------------------\n");

  //we do some memory allocation with malloc

  int* p = malloc(sizeof(int));
  *p = 10;
  printf("Malloc on %p the int %d\n",p, *p);

  char *letter = malloc(sizeof(char));
  *letter = 'c';
  printf("%c\n", *letter);


  free(p);
  return 0;
}
